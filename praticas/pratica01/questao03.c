/*
Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>

int main() {
float pi = 3.1416f;
float raio = 20;

  printf("Entre com o valor do Pi: ");
  scanf("%f", &pi);
  printf("Entre com o valor do raio: ");
  scanf("%f", &raio);
  
float perimetro = 2 * pi * raio;

printf ("o perímetro da pizza é%f\n", perimetro);
  return 0;
}