#include <stdio.h>
#include <stdlib.h>

int** matriz;
int el[3];
int** a;
int** b;
int linha, coluna;

void main(){
  // alocando matriz
  matriz = (int **) malloc(3 * sizeof (int *));
  *(matriz + 0) = (int *) malloc(3 * sizeof (int));
  *(matriz + 1) = (int *) malloc(3 * sizeof (int));
  *(matriz + 2) = (int *) malloc(3 * sizeof (int));

  // alocando a
  a = (int **) malloc(3 * sizeof (int *));
  *(a + 0) = (int *) malloc(3 * sizeof (int));
  *(a + 1) = (int *) malloc(3 * sizeof (int));
  *(a + 2) = (int *) malloc(3 * sizeof (int));

  // alocando b
  b = (int **) malloc(3 * sizeof (int *));
  *(b + 0) = (int *) malloc(3 * sizeof (int));
  *(b + 1) = (int *) malloc(3 * sizeof (int));
  *(b + 2) = (int *) malloc(3 * sizeof (int));


  // iniciando a
  a[0][0] = 11; a[0][1] = 12; a[0][2] = 13;
  a[1][0] = 21; a[1][1] = 22; a[1][2] = 23;
  a[2][0] = 31; a[2][1] = 32; a[2][2] = 33;

  // iniciando b
  b[0][0] = 1; b[0][1] = 0; b[0][2] = 0;
  b[1][0] = 0; b[1][1] = 1; b[1][2] = 0;
  b[2][0] = 0; b[2][1] = 0; b[2][2] = 1;

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