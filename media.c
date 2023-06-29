//Faça um programa em C que pergunte duas notas ao usuário e imprima a sua média, usando o formato "%g". Siga exatamente o modelo do exemplo. Declare seu main como: int main(void) e coloque um return 0; no final.

#include <stdio.h>

int main(void) {
  double nota1 = 0, nota2 = 0;
  
	printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);
  
	printf("Media=%g", (nota1+nota2)/2);
	
  return 0;
}