//Faça um programa em C #que leia dois números inteiros A e B e imprima o maior deles. Considere que os números informados não serão iguais. O programa deve perguntar "Digite o número A: ", "Digite o número B: " e imprimir o maior deles, sem qualquer mensagem adicional.

#include <stdio.h>

int main(void) {
  
  int num1 = 0, num2 = 0;

  printf("Digite o numero A: ");
  scanf("%d", &num1); 
  
  printf("Digite o numero B: ");
  scanf("%d", &num2); 

  if (num1 > num2){
    printf("%d", num1);
    
  }else{
    printf("%d", num2);
  }
  
  return 0;
}