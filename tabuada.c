//Recebe um número e imprime sua tabuada.

#include <stdio.h>

int main(void){
  
  int numero = 0, contador = 1;
  printf("Digite N: ");
  scanf("%d", &numero);
  
  while (contador <= 10){
    printf("%d x %d = %d\n", numero, contador, numero*contador);
    contador += 1;
  }

return 0;
}