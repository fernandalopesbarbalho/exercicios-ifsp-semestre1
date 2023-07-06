//Declare um vetor de caracteres e inicialize com a string "algoritmos". Então conte quantos caracteres tem esta string e imprima. Não use a função strlen().

#include <stdio.h>

int main(void) {
  char nome[15] = "algoritmos", i;
  int contador = 0;

  i = nome[contador];

  while (i != '\0'){
    contador += 1;
    i = nome[contador];
  }

  printf("A palavra algoritmos tem %d caracteres", contador);
}