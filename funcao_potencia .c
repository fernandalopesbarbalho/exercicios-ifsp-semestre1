//Recebe dois números inteiros, sendo a base e o expoente (que deve ser maior ou igual a 1) e retorna a potenciação.

#include <stdio.h>

int potencia(int base, int expoente){
  int contador = 1, multiplicador = 0;
    multiplicador = base;

  while (expoente > contador){
    multiplicador = multiplicador * base;

    contador += 1;
    
  }

  return multiplicador;
}

int main(void) {

  printf("%d", potencia(3,4));
  
  return 0;
}