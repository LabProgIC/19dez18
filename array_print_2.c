#include <stdio.h>
#include <stdlib.h>

char *vetor;
int i;

void main () {

  vetor = (char *) malloc(5 * sizeof (char));
  *(vetor + 0) = 'a';
  *(vetor + 1) = 'e';
  *(vetor + 2) = 'i';
  *(vetor + 3) = 'o';
  *(vetor + 4) = 'u';

  printf("vetor[i]:\n");
  for (i = 0; i < 5; i++) {
    printf("%c\t", vetor[i]);
  }
  printf("\n\n");
}