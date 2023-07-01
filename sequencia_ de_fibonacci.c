// Faça um programa que pergunte "Digite N: ", calcule e mostre os N primeiros termos da sequência de Fibonacci (0, 1, 1, 2 , 3, 5, 8, ..). Esta sequência de números inteiros inicia com 0 e 1, e cada termo seguinte é a soma dos dois anteriores. O valor lido para N sempre será maior ou igual a 2. A saida deve ser somente a sequência, na forma dos exemplos. Para que a próxima impressão continue na mesma linha, omita 0 \n' ao final do printf.

#include <stdio.h>

int main(void) {
  int numero = 0, sequencia = 2, termo1 = 0, termo2 = 1, soma = 0;

  printf("Digite N: ");
  scanf("%d", &numero);

  printf("%d %d", termo1, termo2);

  while (sequencia < numero){
    soma = termo1 + termo2;
    
    printf(" %d", soma);
    
    termo1 = termo2;
    termo2 = soma;
    
    sequencia += 1;
  }
  
return 0;
}