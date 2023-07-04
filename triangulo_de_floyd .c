/*
Escreva um programa que leia um número inteiro positivo n e, em seguida imprima n linhas do chamado Triângulo de Floyd. Para n = 6 teríamos;

1
2  3
4  5  6
7  8  9 10
11 12 13 14 15
16 17 18 19 20 21
*/

#include <stdio.h>

int main(void) {
  int num_linha = 0, num = 0, contador = 0, linha = 0;

  printf("Digite N: ");
  scanf("%d", &num_linha);

  for (contador = 1; contador <= num_linha; contador += 1){
    
    for (linha = 1; linha <= contador; linha += 1){
      num += 1;
      printf("%d ", num);
    }
    
    printf("\n");
  }
  
  return 0;
}