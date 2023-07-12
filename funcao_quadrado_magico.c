//Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária são todas iguais. Escreva uma função que receba uma matriz e verique se é um quadrado mágico, retornando '1' se for e '0' se não for.

//Alterando o define TAM é possível verificar quadrados maiores ou menores.

#include <stdio.h>
#define TAM 3

int verificaQuadradoMagico(int a[TAM][TAM]){
  int i, j, soma_linha1 = 0, soma_linhas, soma_colunas, soma_diagonal1 = 0, soma_diagonal2 = 0;

  for (i = 0; i < TAM; i++){
    soma_linha1 += a[0][i];
  }

   for (i = 0; i < TAM; i++){
    soma_linhas = 0;
    for (j = 0; j < TAM; j++){
      soma_linhas += a[i][j];
    }
    if (soma_linhas != soma_linha1){
      return 0;
    }
  }

  for (i = 0; i < TAM; i++){
    soma_colunas = 0;
    for (j = 0; j < TAM; j++){
      soma_colunas += a[j][i];
    }
    if (soma_colunas != soma_linha1){
      return 0;
    }
  }

  for (i = 0; i < TAM; i++){
    soma_diagonal1 += a[i][i];
  }
  if (soma_diagonal1 != soma_linha1){
    return 0;
  }

  for (i = 0; i < TAM; i++){
    soma_diagonal2 += a[i][TAM - 1 - i];
  }
  if (soma_diagonal2 != soma_linha1){
        return 0;
  }

    return 1; 
}

int main(void) {
  int a[TAM][TAM] = {{8, 0, 7}, {4, 5, 6}, {3, 10, 2}};
  printf("%d", verificaQuadradoMagico(a));
}