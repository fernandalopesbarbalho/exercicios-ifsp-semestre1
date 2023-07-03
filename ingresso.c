// Ingressos para o cinema: Um cinema cobra preços diferentes para os ingressos de acordo com a idade de uma pessoa. Se uma pessoa tiver menos de 3 anos de idade, o ingresso será gratuito, se tiver entre 3 e 12 anos, o ingresso custará 10 reais, se tiver 13 anos ou mais, o ingresso custará 15 reais. Escreva um laço em que você pergunte a idade aos usuários, calcule e imprima o preço de cada ingresso em formato "%g". Encerre a entrada de dados quando for digitada uma idade negativa. Então imprima o total arrecadado (g) e o número de ingressos vendidos de cada tipo. Siga os exemplos.

// Não tem necessidade de ser impresso em %g

#include <stdio.h>

int main(void){
  int idade = 0, gratuito = 0, reais10 = 0, reais15 = 0;

  printf("Idade: ");
  scanf("%d", &idade);

  while (idade >= 0){
    if (idade < 3){
      printf("Preco=0\n");
      gratuito += 1;

    }else if (idade <= 12){
      printf("Preco=10\n");
      reais10 += 1;

    }else{
      printf("Preco=15\n");
      reais15 += 1;
    }

    printf("Idade: ");
    scanf("%d", &idade);
  }

  printf("Total arrecadado = %d\n", reais10*10 + reais15*15);
  printf("N 0 a 2 = %d\n", gratuito);
  printf("N 3 a 12 = %d\n", reais10);
  printf("N 13 ou mais = %d", reais15);

  return 0;
}