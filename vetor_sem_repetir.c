//Recebe seis números e imprime sem duplicatas.

#include <stdio.h>

#define TAM 6

int main(void) {
  int v1[TAM], v2[TAM], i, j, k = 0;
  
  for (i = 0; i < TAM; i++){
    printf("Digite o elemento %d:\n", i);
    scanf("%d", &v1[i]);
  }

  for (i = 0; i < TAM; i++){
    for (j = 0; j < k; j++){
      if (v1[i] == v2[j]){
        break;
      }
    }
    if (k == j){
      v2[k] = v1[i];
      k++;
    }
  }
  for (i = 0; i < k; i++){
    printf("%d ", v2[i]);
  }
}