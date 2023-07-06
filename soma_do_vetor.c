// Leia um vetor de 12 posições e em seguida ler também dois valores x e y correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições x e y.

#include <stdio.h>

#define TAMANHO 12

int main(void) {
  int vetor[TAMANHO], i, num1 = 0, num2 = 0, soma = 0;

  for (i = 0; i < TAMANHO; i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }
  
  printf("\nDigite a posicao: ");
  scanf("%d", &num1);
  printf("Digite a posicao: ");
  scanf("%d", &num2);

  soma = vetor[num1] + vetor[num2];
  
  printf("\nA soma é: %d", soma);
}