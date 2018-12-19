#include <stdio.h>
char vogais[5] = "aeiou";

void main () {
  printf("vogais[0]: %c\n", vogais[0]);
  printf("vogais[1]: %c\n", vogais[1]);
  printf("vogais[2]: %c\n", *(vogais + 2));
  printf("*(vogais + 3): %c\n", *(vogais + 3));
  printf("*(vogais + 3): %c\n", *(vogais + 4));
}