//Faça uma pesquisa entre os habitantes de uma região. Pergunte "Idade: ", "Sexo 1=F 2=M: " e "Salario:\n" (Note o "\n" só após o salário). Faça um programa que pergunte os dados ao usuário na ordem acima e informe: 1. a média salarial do grupo, em formato "%g" 2. a maior e a menor idade do grupo 3. a quantidade de mulheres com salário até R$ 1000,00. Encerre a entrada de dados quando for digitada uma idade negativa. Obs: M significa "Masculino" e não "Mulher

#include <stdio.h>

int main(void){
  int idade = 0, sexo = 0, salario = 0, maior_idade = 0, menor_idade = 0, sal_f = 0, total_pessoas = 0;
  double media = 0;

  printf("Idade: ");
  scanf("%d", &idade);

  while (idade >= 0){
    printf("Sexo (1=F 2=M): ");
    scanf("%d", &sexo);

    printf("Salario:\n");
    scanf("%d", &salario);

    total_pessoas += 1;

    media += salario;

    if (sexo == 1 && salario <= 1000){
      sal_f += 1;
    }

    if (total_pessoas == 1){
      maior_idade = idade;
      menor_idade = idade;

    }else{
      if (idade > maior_idade){
        maior_idade = idade;

      }else if (idade < menor_idade){
        menor_idade = idade;
      }
    }

    printf("Idade: ");
    scanf("%d", &idade);
  }

  printf("Media salarial = %g\n", media/total_pessoas);
  printf("Maior idade = %d ", maior_idade);
  printf("Menor idade = %d\n", menor_idade);
  printf("Mulheres baixa renda = %d", sal_f);

  return 0;
}
