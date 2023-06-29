//Ler dois valores e imprimir uma das três mensagens a seguir: 'Números iguais', caso os números sejam iguais; 'Primeiro maior', caso o primeiro seja maior que o segundo; 'Segundo maior', caso o segundo seja maior que o primeiro.

#include <stdio.h>

int main(void) {
  
  int num1 = 0, num2 = 0;

  printf("Digite o numero A: ");
  scanf("%d", &num1); 
  
  printf("Digite o numero B: ");
  scanf("%d", &num2); 

  if (num1 == num2){
    printf("Numeros iguais");
    
  }else{
  
    if (num1 > num2){
    printf("Primeiro maior");
      
    }else{
    printf("Segundo maior");
    }
  }
  
  return 0;
}