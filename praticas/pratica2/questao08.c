/* 
Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/ 

#include <stdio.h>

#include <math.h>

int main() {
  int x1, y1, x2, y2;

  printf("Entre com as coordenadas x1 e y1: ");
  scanf("%d %d", &x1, &y1);
  
  printf("Entre com as coordenadas x2 e y2: ");
  scanf("%d %d", &x2, &y2);
  double distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("A distancia entre os pontos (%d, %d) e (%d, %d) eh: %.2f\n", x1, y1, x2, y2, distancia);
  
  
  return 0;
}