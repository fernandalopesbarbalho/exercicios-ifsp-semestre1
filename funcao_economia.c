//Recebe o preço do produto que será comprado, o quanto a pessoa tem na poupança, quanto a poupança rende e quanto sobra do salário por mês, retorna o número meses a pessoa terá que poupar apara comprar o item que deseja.

#include <stdio.h>

int poup(double preco, double poupanca, double rende, double sobra){
  int meses = 0;
  double conta = 0;
  
  while (preco > poupanca){
    conta = (poupanca * rende)/100;
    poupanca += sobra + conta;
    meses += 1;

  }
  return meses;
}

int main(void) {
  printf("%d", poup(20000, 19000, 0.5, 910));
  return 0;
}
