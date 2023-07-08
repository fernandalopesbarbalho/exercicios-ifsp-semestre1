//Recebe seis números, conta quantas vezes eles se repetem e imprime essa quantidade na posição correspondente.

#include <stdio.h>

#define TAM 6

int main(void) {
  int vetor[TAM], i, j, contador;
  
  for (i = 0; i < TAM; i++){
    printf("Digite o numero:\n");
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < TAM; i++){
    contador = 0;
    for (j = 0; j < TAM; j++){
      if (vetor[j] == vetor[i]){
        contador += 1;
      }
    }
    printf("%d ", contador);
  }
}