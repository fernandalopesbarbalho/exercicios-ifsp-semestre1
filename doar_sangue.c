//Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que pergunte "Idade: " e responda "Pode doar sangue" ou "Nao pode doar sangue".

#include <stdio.h>

int main(void) {

  int idade = 0;

  printf("Idade: ");
  scanf("%d", &idade);

  if (idade >= 18 && idade <= 67){
    printf("Pode doar sangue");
    
  }else{
    printf("Nao pode doar sangue");
  }
  
  return 0;
}