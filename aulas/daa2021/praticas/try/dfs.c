// Exemplo de pesquisa em profundidade (DFS) num grafo nao dirigido

#include <stdio.h>
#include <stdbool.h>

#define MAX 25      // Maximo numero de nos

int n;              // Numero de nos do grafo
bool adj[MAX][MAX]; // Matriz de adjacencias
bool visited[MAX];  // Que nos ja foram visitados?

void dfs(int v) {
  int i;
  printf("%d ", v);
  visited[v] = true;
  for (i=1; i<=n; i++)
    if (adj[v][i] && !visited[i])
      dfs(i);
}

int main() {
  int i, edges, a, b;

  scanf("%d", &n);
  scanf("%d", &edges);
  for (i=0; i<edges; i++) {
    scanf("%d %d", &a, &b);
    adj[a][b] = adj[b][a] = 1;
  }

  dfs(1); // Pesquisa em profundidade a partir do no 1
  putchar('\n');
  
  return 0;
}
