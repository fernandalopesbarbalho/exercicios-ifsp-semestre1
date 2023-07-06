// Declare um vetor de 10 posições e o preencha com os 10 primeiros números ímpares e mostre o vetor na tela.

#include <stdio.h>

#define TAMANHO 10

int main(void) {
  int vetor[TAMANHO], i, contador = 1;

  for (i = 0; i < TAMANHO ; i++){
    vetor[i] = contador;
    contador += 2;
  }
  for (i = 0; i < TAMANHO; i++){
    printf("\nVetor[%d] : [%d] ", i, vetor[i]);
   }
}