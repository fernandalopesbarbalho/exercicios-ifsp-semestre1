//Recebe como parâmetro um número inteiro que representa a quantidade de horas e outro a quantidade de minutos, retorna o tempo em segundos.

#include <stdio.h>

int obterSegundos(int horas, int minutos){
  int segundos = 0;

  segundos = (horas*3600) + (minutos*60);

  return segundos;
  
}

int main(void) {
  printf("%d", obterSegundos(38,55));
  return 0;
}