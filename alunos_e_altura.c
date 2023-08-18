//Construa um programa que pergunte a idade e altura de uma turma de alunos, terminando quando for digitada uma idade igual a zero. Use alturas em metros. O programa deve imprimir três frases em linhas distintas: a)      "A classe tem %d alunos"; b)      "A idade media dos alunos com menos de 1,70m de altura e' %g". Se não houver alunos nessa condição, deverá ser impresso "Nao ha' alunos com menos de 1,70m de altura"; c)       "A altura media dos alunos com mais de 20 anos e' %g". Se não houver alunos nessa condição, deverá ser impresso "Nao ha' alunos com mais de 20 anos". Dica: guarde as somas e quantidades e deixe para calcular as médias no final. Confira os exemplos.

#include <stdio.h>

int main(void) {
  int idade = 0, total_alunos = 0;
  
  double altura = 0, media_altura = 0, media_idade = 0, alunos_baixos = 0, alunos_adultos = 0;

  printf("Idade: ");
  scanf("%d", &idade);

  while (idade != 0){
    total_alunos += 1;

    printf("Altura: ");
    scanf("%lf", &altura);

    if (altura < 1.70){
      alunos_baixos += 1;
      media_idade += idade;
    }
    
    if (idade > 20){
      alunos_adultos +=1 ;
      media_altura += altura;
    }
    
    printf("Idade: ");
    scanf("%d", &idade);
    
  }

  printf("A classe tem %d alunos\n", total_alunos);

  if (alunos_baixos == 0){
    printf("Nao ha' alunos com menos de 1,70m de altura\n");
    
  }else{
    printf("A idade media dos alunos com menos de 1,70m de altura e' %.2f\n", media_idade/alunos_baixos);
  }

  if (alunos_adultos == 0){
    printf("Nao ha' alunos com mais de 20 anos");
    
  }else{
    printf("A altura media dos alunos com mais de 20 anos e' %.2f", media_altura/alunos_adultos);
  }
  
  return 0;
}
