//Recebe uma sequência de inteiros até 15 números ou até que seja digitado '999'. Armazena em um vetor e procura o trecho de 4 números que tenha a maior soma possível. Imprime a soma e o número da posição que se inicia o trecho (índice).

#include <stdio.h>

int main(void) {
  int v[15], i, j, num, soma, maior_soma = 0, posicao;

  for (i = 0; i < 15; i++){
    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (num == 999){
      break;

    }else{
      v[i] = num;
    }
  }

  for (j = 0; j < (i - 3); j++){
    soma = v[j] + v[j+1] + v[j+2] + v[j+3];

    if (soma > maior_soma){
      maior_soma = soma;
      posicao = j;
    }
  }
  printf("Soma=%d inicio=%d", maior_soma, posicao);
}