#include <stdio.h>
char vetor[5];
int i;

void main () {
  for (i = 0; i < 5; i++) {
    printf("digite o caracter para vetor[%d]\n", i);
    scanf(" %c", (vetor + i));
  }

  for (i = 0; i < 5; i++) {
    printf("vetor[%d] é igual a %c\n", i, *(vetor + i));
  }
}