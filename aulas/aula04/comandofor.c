#include <stdio.h> 

int main (){
int numero = 0;
  printf("Entre com um numero inteiro:");
  int leu_certo = scanf("%i", &numero);



 printf("A tabuada de %i\n", numero);
 for(int i = 0; i <100; i++){
 printf("%i x %i = %i\n", numero, i+1, numero * (i+1));
 }
  // printf("%i X 1 = %i\n", numero, numero * 1);
  // printf("%i X 2 = %i\n", numero, numero * 2);
  // printf("%i X 3 = %i\n", numero, numero * 3);
  // printf("%i X 4 = %i\n", numero, numero * 4);
  // printf("%i X 5 = %i\n", numero, numero * 5);
  // printf("%i X 6 = %i\n", numero, numero * 6);
  // printf("%i X 7 = %i\n", numero, numero * 7);
  // printf("%i X 8 = %i\n", numero, numero * 8);
  // printf("%i X 9 = %i\n", numero, numero * 9);
  // printf("%i X 10 = %i\n", numero, numero * 10);

    return 0;
}