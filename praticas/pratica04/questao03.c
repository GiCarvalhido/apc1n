/*
Faça um programa em C que leia a quantidade e o preço de 10 produtos de um nota fiscal e imprima o valor total de cada produto e o valor total da nota.
*/
#include <stdio.h>

int main() {
  float produtos[10][2];
  float total = 0.0f;

  for(int i = 0; i < 10; i++) {
  printf("Entre com a quantidade de produto %i: ", i+1);
  int deu_certo = scanf("%f", &produtos[i][0]);
  printf("Entre com o preço de produto %i: ", i+1);
  deu_certo = scanf("%f", &produtos[i][1]);
  total = total + (produtos[i][0] * produtos[i][1]);
  }

  printf("O total da NF é R$%5.2f\n", total);
  
  return 0;
}