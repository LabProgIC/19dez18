# 19dez18
Por baixo dos panos vetores são ponteiros. A notação de colchetes e endereços são permutáveis. Além disso uma string funciona como um vetor de caracteres.
```c
#include <stdio.h>
char vogais[5] = "aeiou";

void main () {
  printf("vogais[0]: %c\n", vogais[0]);
  printf("vogais[1]: %c\n", vogais[1]);
  printf("vogais[2]: %c\n", *(vogais + 2));
  printf("*(vogais + 3): %c\n", *(vogais + 3));
  printf("*(vogais + 3): %c\n", *(vogais + 4));
}

/*
  vetor[indice] é uma notação simplificada para
  *(vetor + indice)
  "o conteúdo do endereço 'vetor' acrescido da quantidade 'indice'"
*/
```
1. [exemplo acima](./readme_1.c)
2. [notação acima no scanf](./readme_2.c)
3. [impressão de matriz](./matrix_print_1.c)
4. [multiplica matrizes](./multiplicaMatriz_1.c)
5. [imprime vetor](./array_print_1.c)
6. [impressão de matriz 2](./matrix_print_2.c)
7. [multiplica matrizes 2](./multiplicaMatriz_2.c)
8. [imprime vetor dinamico](./array_print_2.c)
9. [imprime matriz dinamica](./matrix_print_3.c)
10. [multiplica matrizes dinamicas](./multiplicaMatriz_3.c)