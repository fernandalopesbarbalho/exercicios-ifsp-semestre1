//Recebe como parâmetro um vetor de inteiros e seu tamanho, retorna o segundo maior elemento presente no vetor.

#include <stdio.h>

int segundoMaior(int v[], int n){
  int i, segundo = 0, maior = 0;

  for (i = 0; i < n; i++){
    if (v[i] < segundo){
      
    }else if (v[i] > maior && v[i] > segundo){
      segundo = maior;
      maior = v[i];
      
    }else if (v[i] < maior && v[i] > segundo){
      segundo = v[i];
    }
  }
  return segundo;
}


int main(void) {
  int vetor[] = {4, 2, 7, 5, 1, 6, 3};
  
  printf("O segundo maior e: %d", segundoMaior(vetor, 7));
  return 0;
}