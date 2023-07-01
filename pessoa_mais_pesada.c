//Crie um programa que leia a altura e o peso de 5 pessoas e apresente qual a pessoa mais pesada e a altura dela. As perguntas devem ser: Altura da pessoa (n: Peso da pessoa (n):\n", onde (n) éo numero de ordem da pessoa. Note O 1n no final, somente do peso. A resposta deve ser: "A pessoa mais pesada e' a de numero (n), com altura (altura)". Use alura e peso em ponto flutuante e formatação "%g" Se forem digitadas pessoas com O mesmo peso, 2 maior do que O das restantes, qualquer delas poderá ser impressa.

#include <stdio.h>

int main(void) {
  
  int numerador = 1, controle = 0;
  double altura = 0, peso = 0, maior_peso = 0, altura_maior = 0;

  while (numerador <= 5){
    printf("Altura da pessoa %d: ", numerador);
    scanf("%lf", &altura);
    
    printf("Peso da pessoa %d:\n", numerador);
    scanf("%lf", &peso);

    if (peso > maior_peso){
      maior_peso = peso;
      altura_maior = altura;
      controle = numerador;
    }

    numerador += 1;
  }
  
  printf("A pessoa mais pesada e' a de numero %d, com altura %g", controle, altura_maior);
  
  return 0;
}