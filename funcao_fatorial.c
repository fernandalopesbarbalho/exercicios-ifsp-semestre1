//Recebe um número e retorna seu fatorial.

#include <stdio.h>

int fatorial(int n){
  int  multiplicador = 1, contador = 0;

  if (n == 0){
    return 1;
    
  }else{
    contador = n;
    
    while (multiplicador < contador){
      n = n * multiplicador;
      multiplicador += 1;
    }
    return n;
  } 
}


int main(void) {
  printf("%d\n", fatorial(5));
  return 0;
}