//Recebe como parâmetro um vetor de números inteiros e um número inteiro que é a quantidade de elementos do vetor, retorna a quantidade de números pares.

#include <stdio.h>

int cont(int v[], int tam){
  int i, contador = 0;
  for (i = 0; i < tam; i++){
    if (v[i] % 2 == 0){
      contador += 1;
    }
  }
  return contador;
}

int main(void) {
  int v[] = {1, 2, 3, 4, 5, 6}, v1[] = {3, 5, 7, 9};
  printf("%d", cont(v, 6));
  printf("\n%d", cont(v1, 4));
  
}