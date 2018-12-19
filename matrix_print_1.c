#include <stdio.h>

int matriz[3][3] = {
  {11, 12, 13},
  {21, 22, 23},
  {31, 32, 33}
};
int el;

int linha, coluna;

void main(){
  printf("\n\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      el = matriz[linha][coluna];
      printf("%d\t", el);
    }
    printf("\n\n\n");
  }
}