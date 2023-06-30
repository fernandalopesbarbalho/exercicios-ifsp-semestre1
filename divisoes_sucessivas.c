//Faça um programa que pergunte um número real com "Digite N: " e divida-o por dois sucessivamente até que o resultado seja menor que 1. Mostre o resultado da última divisão e a quantidade de divisões efetuadas. Siga exatamente os exemplos.

#include <stdio.h>

int main(void) {
  double numero = 0;
  int contador = 0;

  printf("Digite N: ");
  scanf("%lf", &numero);
  
    while (numero >= 1){
      numero = numero/2;
      contador += 1;
    }

  printf("Ultimo resultado = %g\n", numero);
  printf("Foram feitas %d divisoes", contador);
  
  return 0;
}