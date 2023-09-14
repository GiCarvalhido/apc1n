/*
Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
  */
#include <stdio.h>

int main(){
  int altura = 14;
  int base = 7;
  
  float area = altura * base /2.0f;
  
  printf("a area do triângulo é %f\n", area);
  
  return 0;
}