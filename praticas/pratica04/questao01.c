/* Faça um programa em C que preencha uma matriz com 10 números, depois leia um número e localize a posição dele na matriz.
  */
#include <stdio.h>

int main() {
  int numeros[10] = {5, 4, 2, 3, 1, 6, 8, 7, 9};

 /* numeros[0] = 5; 
  numeros[1] = 10;
  numeros[2] = 6; 
  numeros[3] = 20;
  numeros[4] = 7;
  numeros[5] = 30;
  numeros[6] = 8; 
  numeros[7] = 40; 
  numeros[8] = 9;
  numeros[9] = 50 */
   int numero = 0;
   printf("Entre com um numero: ");
   int deu_certo = scanf("%i", &numero);

  int posicao = -1;

   for(int i=0; i<10; i++) {
     if(numero == numeros[i]) {
       posicao = i;
       break;
     }   
   }

  if(posicao <0) {
    printf("O numero %i não está na matriz.\n", numero);
  } else {
    printf("Achei o numero %i na posição %i da matriz.\n", numero, posicao);
  }

  return 0;
}

