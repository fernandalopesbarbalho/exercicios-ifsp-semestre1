//Tendo como entrada a altura em metros e o sexo (codificado o sexo através do número 1 para masculino e 2 para feminino) de uma pessoa, construa um programa que calcule e imprima seu peso ideal em quilos, utilizando as seguintes fórmulas: Para homens: (72.7 * Altura) - 58; Para mulheres: (62.1 * Altura) - 44.7. OBS: Ao manipular um tipo double para a questão utilize %lf para o comando scanf e %g para no comando printf.

#include <stdio.h>

int main(void){
	
	double altura = 0;
	int sexo = 0;
	
	printf("Digite a altura em metros: ");
	scanf("%lf", &altura);
	
	printf("Digite 1 para sexo masculino e 2 para feminino: ");
	scanf("%d", &sexo);
	
	if (sexo == 1){
		printf("%g", (72.7 * altura) - 58);
	}else{
		printf("%g", (62.1 * altura) - 44.7);
	}
	
	return 0;
}