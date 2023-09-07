/*
Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
  */

#include <stdio.h>

#define ICMS 0.17f
#define CONFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
  float preco_produto = 100.0f;
  
  float valor_icms = preco_produto * ICMS;
  float valor_confins = preco_produto * CONFINS;
  float valor_pispasep = preco_produto * PIS_PASEP;
  float preco_final = (1 + ICMS + CONFINS + PIS_PASEP)* preco_produto;

  printf("O preco final do produto é %f\n", preco_final);
  printf("O valor do ICMS é %f\n", valor_icms);
  printf("O valor do CONFINS é %f\n", valor_confins);
  printf("O valor do PIS_PASEP é %f\n", valor_pispasep);
  
  return 0;
  
}