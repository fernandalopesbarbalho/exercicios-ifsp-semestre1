//Recebe a altura e o sexo da pessoa ('M' ou 'F') e retorna seu peso ideal, sendo calculado para homens = 72,7 x altura - 58 e para mulheres = 62,1 x altura - 44,7.

#include <stdio.h>

double ideal(double altura, char sexo){
  double peso = 0;

  if (sexo == 'M'){
    peso = (72.7 * altura) - 58;
    
  }else if (sexo == 'F'){
     peso = (62.1 * altura) - 44.7;
    
  }
  return peso;
}

int main(void) {
  printf("%g\n", ideal(1.60, 'F'));
  printf("%g", ideal(1.70, 'M'));
  return 0;
}