//Dados três segmentos de reta a, b e c, se (a+b > c) e (a+c > b) e (b+c > a), estes podem formar um triângulo. Faça um programa que pergunta "a: ", b: " e "c: ", verifica se pode ser construído um triângulo com estes segmentos e responde: "Pode ser um triângulo" ou "Não pode ser um triângulo". Utilize um tipo double na solução.

#include <stdio.h>

int main(void){

	double a = 0, b = 0, c = 0;
	
	printf("a: ");
	scanf("%lf", &a);
	
	printf("b: ");
	scanf("%lf", &b);
	
	printf("c: ");
	scanf("%lf", &c);
	
	if ( a+b > c && a+c > b && b+c > a){
		printf("Pode ser um triangulo");
	}else{
		printf("Nao pode ser um triangulo");
	}
	
	return 0;
}