//Faça um programa que pergunte: "Digite N: ", calcule o fatorial de N e imprima: "O fatorial de {n} e' {fatorial}". Veja os exemplos. Use números inteiros. Dica: você pode calcular o fatorial tanto na ordem crescente, 1 * 2 * 3 * 4, quanto na ordem decrescente, 4 * 3 * 2 * 1. Multiplicar por 1 é opcional, mas tem que funcionar também para o fatorial de zero, que é igual a 1.

#include <stdio.h>

int main(void) {
  int numero = 0, multiplicador = 1, comparador = 0;

  printf("Digite N: ");
  scanf("%d", &numero);

  comparador = numero;

  if (numero == 0){
  printf("O fatorial de 0 e' 1");
    
  }else{
    while (multiplicador < comparador){
      numero = numero * multiplicador;
      multiplicador +=1;
    }
    
  printf("O fatorial de %d e' %d", comparador, numero);
  }
  
  return 0;
}