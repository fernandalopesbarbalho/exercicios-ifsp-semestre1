//Recebe como parâmetro um vetor que representa as temperaturas dos dias de uma semana, calcula a média das delas e retorna a quantidade de dias que a temperatura ficou abaixo da média.

#include <stdio.h>

#define TAM 7

int temperaturasAbaixoMedia(int v[]){
  int i, contador = 0;
  double soma = 0;

  for (i = 0; i < TAM; i++){
    soma += v[i];  
  }
  
  for (i = 0; i < TAM; i++){
    if (v[i] < (soma/TAM)){
      contador += 1;
    }
  }
  return contador;
}

int main(void) {
  int v[] = {18, 16, 41, 21, 20, 19,35};
  printf("%d", temperaturasAbaixoMedia(v));
  return 0;
}