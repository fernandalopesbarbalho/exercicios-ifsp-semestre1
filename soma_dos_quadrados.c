//Faça um programa que pergunte "Digite N: ", calcule a soma dos quadrados dos N primeiros números inteiros, começando em 1, e imprima esta soma, precedida de "A soma dos quadrados e' ". Siga exatamente o modelo dos exemplos.

#include <stdio.h>

int main(void) {
  int numero = 0, quadrado = 0, comparador = 1;
  
  printf("Digite N: ");
  scanf("%d", &numero);

  while (numero >= comparador){
    quadrado = quadrado + (comparador * comparador);
    comparador += 1;
  }

  printf("A soma dos quadrados e' %d", quadrado);
  
  return 0;
}