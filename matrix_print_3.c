#include <stdio.h>
#include <stdlib.h>

int** matriz;
int el;

int linha, coluna;

void main(){
  // alocando o ponteiro do vetor de vetor
  matriz = (int **) malloc(3 * sizeof (int *));
  
  // alocando os 3 ponteiros de vetor
  *(matriz + 0) = (int *) malloc(3 * sizeof (int));
  *(matriz + 1) = (int *) malloc(3 * sizeof (int));
  *(matriz + 2) = (int *) malloc(3 * sizeof (int));

  // iniciando o primeiro vetor de vetor
  *( *(matriz + 0) + 0) = 11;
  *( *(matriz + 0) + 1) = 12;
  *( *(matriz + 0) + 2) = 13;

  // iniciando o segundo vetor de vetor
  *( *(matriz + 1) + 0) = 21;
  *( *(matriz + 1) + 1) = 22;
  *( *(matriz + 1) + 2) = 23;

  // iniciando o terceiro vetor de vetor
  *( *(matriz + 2) + 0) = 31;
  *( *(matriz + 2) + 1) = 32;
  *( *(matriz + 2) + 2) = 33;


  printf("\n\n");
  for (linha = 0; linha < 3; linha++) {
    for (coluna = 0; coluna < 3; coluna++) {
      el = *( *(matriz + linha) + coluna);
      printf("%d\t", el);
    }
    printf("\n\n\n");
  }
}