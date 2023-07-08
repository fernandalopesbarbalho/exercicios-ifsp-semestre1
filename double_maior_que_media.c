//Recebe cinco números em ponto flutuante, calcula sua média e imprime os maiores que ela.

#include <stdio.h>

#define TAM 5

int main(void) {
  double vetor[TAM], soma = 0;
  int i;
  
  //receber os dados
  for (i = 0; i < TAM; i++){
    printf("Digite o elemento:\n");
    scanf("%lf", &vetor[i]);
    
    soma += vetor[i];
  }

  //mostrar os dados
  for (i = 0; i < TAM; i++){
    if (vetor[i] > (soma/5)){
      printf("%g ", vetor[i]);
    }
  }
}