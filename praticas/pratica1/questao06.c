/*
  Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>

int main() {
  
    double a, b, c;
    double delta, root1, root2;
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    // Calculate the discriminant
    delta = b * b - 4 * a * c;
    // Check if roots are real
    // if (delta >= 0) {
        root1 = (-b + sqrt(delta)) / (2 * a);
        root2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes da equação: %.2f e %.2f\n", root1, root2);
     //} else {
    //   printf("A equação não possui raízes reais.\n");
   //}
    return 0;
}