//Recebe a média final de um aluno e retorna seu conceito, sendo 'D' de 0,0 a 4,9, 'C' de 5,0 a 6,9, 'B' de 7,0 a 8,9 e 'A' de 9,0 a 10,0.

#include <stdio.h>

char conceito(double nota){
  if (nota < 5){
    return 'D';
    
  }else if (nota < 7){
    return 'C';
    
  }else if (nota < 9){
    return 'B';
    
  }else{
    return 'A';
  }
}

int main(void) {
  printf("%c", conceito(8.0));
  
}