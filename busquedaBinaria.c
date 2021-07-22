#include <stdio.h>

int main() {
  int n;
  int x;
  int primero, ultimo, medio;
  scanf("%d[^\n]",&n);
  int v[n];
  for (int i = 0; i < n; i++) {
    scanf("%d[^\n]",&v[i] );
  }
  scanf("%d[^\n]",&x);
  int pos = -1;
  primero = 0;
  
  ultimo = n - 1;
  medio = (primero+ultimo)/2;
  while (primero <= ultimo) {
    if (v[medio] < x)
    primero = medio + 1;
    else if (v[medio] == x) {
      pos = medio;
      break;
    }
    else
      ultimo = medio - 1;
    medio = (primero + ultimo)/2;
  }
  printf("%d", pos);
  return 0;
}
