//Imprima a string "algoritmos" caractere por caractere, porém na ordem inversa.

#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[15] = "algoritmos";
  int contador = 0, i;
  
  contador = strlen(nome);

  for (i = contador; i >= 0; i--){
    printf("%c\n", nome[i]);
   }
}