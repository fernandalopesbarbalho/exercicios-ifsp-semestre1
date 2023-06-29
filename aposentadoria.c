//Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em condições, um dos seguintes requisitos deve ser satisfeito: i) Ter no mínimo 65 anos de idade. ii) Ter trabalhado no mínimo 30 anos. iii) Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. Com base nas informações acima, faça um algoritmo que leia o ano de seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Nao requerer'. Assuma que o ano corrente é 2021 e não se preocupe com os meses, fazendo a subtração simples dos anos. Utilize os operadores and e or.

#include <stdio.h>

int main(void){

	int nasce = 0, trabalha = 0, idade, contribuicao;
	
	printf("Ano de nascimento: ");
	scanf("%d", &nasce);
	
	printf("Ano de ingresso: ");
	scanf("%d", &trabalha);
	
	idade = 2021 - nasce;
	contribuicao = 2021 - trabalha;
	
	if ((idade>=60 && contribuicao>=25)||(idade>=65 || contribuicao>=30)){
		printf("Idade = %d\nTempo de trabalho = %d\nRequerer aposentadoria", idade, contribuicao);
	}else{
		printf("Idade = %d\nTempo de trabalho = %d\nNao requerer", idade, contribuicao);
	}
	
	return 0;
}