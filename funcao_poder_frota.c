/*
Em uma galáxia distante, existem diversas frotas espacials em querra. Cada frota
é representada por uma sequência de naves, identificadas por números inteiros.
As frotas possuem poderes diferentes, e você precisa ajudar a calcular o poder
total de cada frota.

A sua missão é desenvolver uma função em C que receba como entrada um vetor de
inteiros representando as naves de uma frota. A função deve calcular a poder
total da frota, seguindo a seguinte regra: o poder de uma nave é dado pelo valor
do número elevado à sua posição no vetor (base 1). O poder total da frota e a
soma dos poderes individuais de cada nave.

Cada frota pode possuir no máximo 10 naves, mas sua função deverá ser capaz de
calcular frotas com números menores de naves, bastando para isso informar o
valor 0 indicando o fim da frota.

Exemplo:
Suponha que você tenha uma frota com as seguintes naves [3, 5, 2, 4, 0]. Nesse
caso, o resultado esperado é 292, pois o poder total da frota é calculado da
seguinte forma:

3^1 + 5^2 + 2^3 + 4^4 = 3 + 25 + 8 + 256 = 292.
*/

#include <stdio.h>

int calcularPoderTotal(int frota[]){
  int i, j, total = 0, semi = 0, semitotal = 0;

  for (i = 0; i < 10; i++){
    if (frota[i] == 0){
      break;

    }else{
      if (i == 0){
        total += frota[i];

      }else if (i == 1){
        total += frota[i] * frota[i];

      }else{
        j = 2;
        semitotal = frota[i] * frota[i];

        while (j <= i) {
          semi = semitotal * frota[i];
          semitotal = semi;
          j++;
        }
      }
      total += semi;
    }
  }
  return total;
}

int main(void) {
  int v[10] = {3, 5, 2, 4, 0};
  printf("Poder da frota: %d", calcularPoderTotal(v));
  }