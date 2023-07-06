//Recebe um número inteiro e retorna qual o valor na Sequência de Fibonacci corresponde a posição dada.

#include <stdio.h>

int fibonacci(int posicao){
  int sequencia = 2, termo1 = 1, termo2 = 1, soma = 0;

  if (posicao == 1 || posicao == 2){

  }else{
    while (sequencia < posicao){
    soma = termo1 + termo2;
    
    termo1 = termo2;
    termo2 = soma;
    
    sequencia += 1;
    }
  }
  
  return termo2;
}


int main(void) {
  printf("%d", fibonacci(10));
  return 0;
}