//Escreva um algoritmo que leia 10 números inteiros, com valores positivos ou negativos, e ao final exiba os seguintes resultados: Quantidade de números digitados maiores ou igual a 0; Quantidade de números digitados menores que 0; Soma de todos os números digitados maiores que zero; Soma dos números digitados menores que zero.

#include <stdio.h>

int main(void) {
  int num = 0, contador = 0, maior = 0, menor = 0, soma_maior = 0, soma_menor = 0; 

  for (contador = 1; contador <= 10; contador += 1){
    printf("Digite N: ");
    scanf("%d", &num);

    if (num >= 0){
      maior += 1;
      soma_maior += num;
      
    }else{
      menor += 1;
      soma_menor += num;
    }
  }

  printf("\nQuantidade de numeros digitados maiores ou igual a 0: %d", maior);
  printf("\nQuantidade de numeros digitados menores que 0: %d", menor);
  printf("\nSoma de todos os numeros digitados maiores que zero: %d", soma_maior);
  printf("\nSoma dos numeros digitados menores que zero: %d", soma_menor);

  return 0;
}