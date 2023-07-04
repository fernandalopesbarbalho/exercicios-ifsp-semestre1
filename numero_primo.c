// Escreva um algoritmo que leia um número inteiro e positivo, e diga se esse número é primo ou não. Um número é primo somente quando ele for divisível por 1 e por ele mesmo.

#include <stdio.h>

int main(void) {
  int num = 0, contador = 0, divisores = 0;

  printf("Digite N: ");
  scanf("%d", &num);

  if (num >= 2){

    for (contador = 1; contador <= num; contador += 1){
    
      if (num % contador == 0){
       divisores += 1;
      }
    }

    if (divisores == 2){
      printf("O numero %d e primo", num);
    
    }else{
      printf("O numero %d nao e primo", num);
    }
    
  }else{
    printf("Numero invalido");
  }

  return 0;
}