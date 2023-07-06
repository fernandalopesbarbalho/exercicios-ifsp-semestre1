//Programa que recebe um número menor que zero e calcula a série 1/1^2 + 1/2^2 + 1/3^2 + 1/4^2 + ... até que o termo (cada parcela da soma) seja menor que o número digitado. Imprime o número de termos somados e a soma da série.

#include <stdio.h>
#include <math.h>

int main(void) {
  
  int contador = 1;
  double limite = 0, termo = 1, soma = 0;
  
  printf("Digite um limite pequeno, menor do que 1: ");
  scanf("%lf", &limite);

  while (termo >= limite){
    termo = 1 / (pow(contador, 2));
    
    soma += termo;
    contador += 1;
  }

  printf("Foram somados %d termos\nSoma = %g", contador - 1, soma);
  
  return 0;
}