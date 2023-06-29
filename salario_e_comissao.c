//Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor, calcular e escrever o seu salário total. Exemplo 1: se o total de vendas for 1000, a comissão é 3% disso, ou seja, 30 reais. Se o salário fixo for de 1100 reais, o salário total será de 1130 reais. Exemplo 2: se o total de vendas for 2000, a comissão será: 3% de 1500, ou 45 reais, MAIS 5% de (2000-1500 = 500), que dá 25 reais, num total de 70 reais, só a comissão. Se o salário fixo for de 1200 reais, o salário total será de 1270 reais.

#include <stdio.h>

int main(void) {

  int salario = 0, vendas = 0, comissao = 0;

  printf("Salario fixo: ");
  scanf("%d", &salario);

  printf("Valor das vendas: ");
  scanf("%d", &vendas);

  if (vendas > 1500){
    comissao = ((vendas-1500) * 5)/100;
    comissao = comissao + (1500 * 3)/100;
    printf("Salario total = %d", salario + comissao);
    
  }else{
    comissao = (vendas * 3)/100;
    printf("Salario total = %d", salario + comissao);
  }

  return 0;
}