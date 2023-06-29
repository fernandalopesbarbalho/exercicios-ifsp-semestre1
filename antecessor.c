//Escreva um programa em C que pergunte ao usuário: "Entre com um numero inteiro: " e escreva na tela o seu antecessor, sem qualquer mensagem. Antecessor é número que vem antes, ou seja, n - 1.

#include <stdio.h>

int main(void){

	int numero = 0;

	printf("Entre com um numero inteiro: ");
	scanf("%d", & numero);
	
	printf("%d\n", numero-1);

}

