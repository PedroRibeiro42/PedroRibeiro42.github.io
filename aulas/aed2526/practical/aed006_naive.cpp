// [AED006] Bakugans
// A naive O(N*P) solution

#include <iostream>

using namespace std;

int main() {

  // Read Bakugans energy
  int n;
  cin >> n;
  int energy[n+1];
  for (int i=1; i<=n; i++)
    cin >> energy[i];

  // Read and process photos
  int p;
  cin >> p;
  for (int i=0; i<p; i++) {
    int a, b, sum = 0;    
    cin >> a >> b;
    // one cycle per photo
    for (int j=a; j<=b; j++) 
      sum += energy[j];
    cout << sum << endl;
  }
  
  return 0;
}
