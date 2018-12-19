#include <stdio.h>

char vetor[5] = {'a', 'e', 'i', 'o', 'u'};
char frase[5] = "aeiou";
int i;

void main () {

  printf("vetor[i]:\n");
  for (i = 0; i < 5; i++) {
    printf("%c\t", vetor[i]);
  }
  printf("\n\n");

  printf("*(vetor + i):\n");
  for (i = 0; i < 5; i++) {
    printf("%c\t", *(vetor + i));
  }
  printf("\n\n");


  printf("*(frase + i):\n");
  for (i = 0; i < 5; i++) {
    printf("%c\t", *(frase + i));
  }
  printf("\n\n");

  printf("frase[i]:\n");
  for (i = 0; i < 5; i++) {
    printf("%c\t", frase[i]);
  }
  printf("\n\n");
}