//Recebe um número correspondente ao peso de uma massa radioativa, sendo que o material perde metade de sua massa a cada 50 segundos, retorna a quantidade de segundos que essa massa se torne menor que 0,5 gramas.

#include <stdio.h>

int tempo(double massa){
  int tempo = 0;

  while (massa > 0.5){
    massa = massa/2;
    tempo += 50;
  }
  return tempo;
}

int main(void) {
  printf("%d", tempo(3));
  return 0;
}