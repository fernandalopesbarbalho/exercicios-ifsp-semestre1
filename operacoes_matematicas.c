//Faça um programa em C que pergunte 2 números inteiros ao usuário e imprima sua soma, subtração, multiplicação e divisão, usando a mensagem "Soma=%d sub=%d mult=%d div=%d\n".

#include <stdio.h>

int main(void){

	int num1 = 0, num2 = 0;
	
	printf("Digite N1: ");
	scanf("%d", &num1);
	
	printf("Digite N2: ");
	scanf("%d", &num2);
	
	printf("Soma=%d sub=%d mult=%d div=%d\n", num1+num2, num1-num2, num1*num2, num1/num2);
	
	return 0;
}