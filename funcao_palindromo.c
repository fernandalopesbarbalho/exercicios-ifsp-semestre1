//Recebe uma palavra em um vetor de caracteres e verifica se é um palíndromo. Se sim, imprime '1', caso contrário, imprime '0'.

#include <stdio.h>
#include <string.h>

int verificarPalindromo(char palavra[]){
  char contrario[30];
  int tamanho, iguais, i, j;

  tamanho = strlen(palavra) - 1;

  for (i = tamanho, j = 0; i >= 0; i--, j++){
    contrario[j] = palavra[i];
  }

  iguais = strcmp(palavra, contrario);

  if (iguais == 0){
    return 1;
    
  }else{
    return 0;
  }
}


int main(void) {
  #include <string.h>

  char palavra[30];
  strcpy(palavra, "mussum");
  printf("%d", verificarPalindromo(palavra));

  return 0;
}