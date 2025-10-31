#include <bits/stdc++.h>

#define MAX     200005
#define MAX_ST  800005

#define NEUTRAL 0

using namespace std;

typedef int64_t st_value; // type of segment tree value

int n;               // Number of elements in the segtree
st_value v[MAX];     // Array of values
st_value st[MAX_ST]; // Segtree (in this case storing interval sums)

// Merge contents of nodes a and b
st_value merge(st_value a, st_value b) {
  return a+b;
}

// Build initial segtree (in position pos, interval [start,end])
void build(int pos, int start, int end) {
  if (start == end) {
    st[pos] = v[start];
  } else {      
    int middle = start + (end-start)/2;
    build(pos*2, start, middle);
    build(pos*2+1, middle+1, end);
    st[pos] = merge(st[pos*2], st[pos*2+1]);
  }  
}

// Update node x to value r
void update(int pos, int start, int end, int x, st_value r) {
  if (start>x || end<x) return;
  if (start == end && start==x) {
    st[pos] = r;
  } else {      
    int middle = start + (end-start)/2;
    update(pos*2, start, middle, x, r);
    update(pos*2+1, middle+1, end, x, r);
    st[pos] = merge(st[pos*2], st[pos*2+1]);
  }  
}

// Make a query of interval [x,y]
st_value query(int pos, int start, int end, int x, int y) {
  if (start>y || end<x) return NEUTRAL;
  if (start>=x && end<=y) return st[pos];
  
  int middle = start + (end-start)/2;
  st_value a = query(pos*2, start, middle, x, y);
  st_value b = query(pos*2+1, middle+1, end, x, y);
  return merge(a, b);
}

int main() {
  int q;
  cin >> n >> q;
  for (int i=1; i<=n; i++)
    cin >> v[i];
    
  build(1, 1, n);

  for (int i=1; i<=q; i++) {
    int op, a, b;
    cin >> op >> a >> b;
    if (op == 1) update(1, 1, n, a, b);
    else cout << query(1, 1, n, a, b) << endl;
  }
  
  return 0;
}
