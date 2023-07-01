//Faça um programa que pergunta a idade de várias pessoas, encerrando quando for digitada uma idade negativa. Então calcula a média das idades, respondendo "A média de idade é (média)".

#include <stdio.h>

int main(void) {
  int idade = 0, media = 0, divisor = 0;

  while (idade >= 0){
    printf("Idade: ");
    scanf("%d", &idade);

    if (idade < 0){
      break;
    }

    media = media + idade;

    divisor += 1;
  }

  printf("\nA média de idade é %d", media/divisor);
  
  return 0;
}