//Leia 3 valores inteiros (%d) (considere que não serão informados valores iguais) e escreva o maior valor entre eles.

#include <stdio.h>

int main(void) {
  
  int num1 = 0, num2 = 0, num3 = 0;

  printf("Digite o 1 valor: ");
  scanf("%d", &num1); 
  
  printf("Digite o 2 valor: ");
  scanf("%d", &num2); 

  printf("Digite o 3 valor: ");
  scanf("%d", &num3); 

  if (num1 > num2 && num1 > num3){
    printf("O maior valor e: %d", num1);
    
  }else{
    if (num2 > num1 && num2 > num3){
      printf("O maior valor e: %d", num2);
    
    }else{
        printf("O maior valor e: %d", num3);
    }
  }
  
  return 0;
}