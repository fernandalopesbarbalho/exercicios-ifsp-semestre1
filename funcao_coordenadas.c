//Recebe duas coordenadas cartesianas x e y, imprime a distância até a origem (√(x^2 + y^2)).

#include <stdio.h>
#include <math.h>

double dist(double x, double y){
  double calcular = 0;
  calcular = (x * x) + (y * y);

  return sqrt(calcular);
}


int main(void) {
  printf("%g", dist(2,0));
  return 0;
}