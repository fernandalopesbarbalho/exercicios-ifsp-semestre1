// Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano. Escreva um algoritmo que seja capaz de calcular e mostrar o tempo necessário para que a população do país A ultrapasse a população do país B. Utilize uma estrutura de repetição para realizar o cálculo.

#include <stdio.h>

int main(void) {
  int pais_a = 5000000, pais_b = 7000000, anos = 0;

  while (pais_a <= pais_b) {
    pais_a += (pais_a * 3)/100;
    pais_b += (pais_b * 2)/100;
    anos += 1;
  }
  
  printf("O tempo necessario para que a populacao do pais A ultrapasse a populacao do pais B e de %d anos", anos);
  
  return 0;
}