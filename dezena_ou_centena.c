//Faça um algoritmo que leia um número n e imprima "F1", "F2" ou "F3", conforme a condição: "F1", se n <= 10; "F2", se n > 10 e n <= 100; "F3", se n > 100.

#include <stdio.h>

int main(void){

	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num <= 10){
		printf("F1");
	}else{
		if (num <= 100){
			printf("F2");
		}else{
			printf("F3");
		}
	}
	
	return 0;
}