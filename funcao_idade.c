//Recebe a idade de uma pessoa em anos, meses e dias e retorna a idade total em dias.

#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias){
  int total_dias = 0;

  if (meses > 12 || dias > 30){
    return -1;
    
  }else{
    total_dias = (anos * 365) + (meses * 30) + dias;
    return total_dias;
  }
}


int main(void) {

   printf("%d", idadeEmDias(10,10,10));
  
  return 0;
}