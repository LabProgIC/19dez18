#include <stdio.h>

int matriz[3][3];
int el[3];

int a[3][3] = {
  {11, 12, 13},
  {21, 22, 23},
  {31, 32, 33}
};

// matriz identidade
int b[3][3] = {
  {1, 0, 0},
  {0, 1, 0},
  {0, 0, 1}
};

int linha, coluna;

void main(){

  // multiplica a * b = matriz
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      *(el + 0) = *(*(a + linha) + 0) * *(*(b + linha) + 0);
      *(el + 1) = *(*(a + linha) + 1) * *(*(b + linha) + 1);
      *(el + 2) = *(*(a + linha) + 2) * *(*(b + linha) + 2);
      matriz[linha][coluna] =  *(el + 0) + *(el + 1) + *(el + 2);
    }
  }


  // imprime matriz
  printf("\n\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      printf("%d\t", *( *(matriz + linha) + coluna) );
    }
    printf("\n\n\n");
  }
}