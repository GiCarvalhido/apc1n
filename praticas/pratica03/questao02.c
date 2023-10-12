/*
Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.
 */

#include <stdio.h>

int main() {
float valor_bruto = 0.0;
float valor_desconto = 0.0f;

printf("Entre com um valor:");
int leu_certo = scanf("%f", &valor_bruto);

if(leu_certo) {
 if (valor_bruto <= 100.0f) {
  valor_desconto = valor_bruto * 0.01;
} else if (valor_bruto > 100.0f && valor_bruto <= 500.0f) {
   valor_desconto = valor_bruto * 0.05;
} else if (valor_bruto > 500.0f) {
   valor_desconto = valor_bruto * 0.1f;
}

printf("O valor do desconto foi %.2f\n", valor_desconto);
} else {
  printf("Erro ao ler o valor. Tente novamente\n");
}
  return 0;
}