#include <stdio.h>

int main() {
  int numero = 0;

  printf("Entre com um numero inteiro entre 1 a 10: ");
  int leu_certo = scanf("%i", &numero);

  while(numero < 1 || numero > 10) {
    printf("Numero invalido. Tente novamente: ");
    leu_certo = scanf("%i", &numero);
  }
  do{
  printf("A tabuada de %i\n", numero);

  int i = 0;
  while(i<10) {
    printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
    i++;
  }
return 0;
}