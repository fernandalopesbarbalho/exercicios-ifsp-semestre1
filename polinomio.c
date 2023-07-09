//Recebe seis coeficientes reais de um polinômio p(x) = x + x^1 + x^2 + x^3 + x^4 + x^5 e armazena em um vetor. Em seguida, recebe o valor de x, calcula e imprime o valor do polinômio até que seja digitado 0 para o valor de x.

#include <stdio.h>
#include <math.h>
#define TAM 6

int main(void) {
  int i; 
  double v[TAM], resultado = 0, x = 1; 
  
  for (i = 0; i < TAM; i++){
    printf("Digite o coeficiente %d:\n", i);
    scanf("%lf", &v[i]);
  }
  
  while (x != 0){
    printf("Digite X: ");
    scanf("%lf", &x);

    if (x == 0){
      break;
    }

    for (i = 0; i < TAM; i++){
      resultado += v[i] * pow(x, i);
    }
    
    printf("p(%g) = %g\n", x, resultado);
    resultado = 0;
  }
  
  return 0;
}