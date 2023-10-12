/*
Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>

int main(){
  int nota = 0;

  printf("Digite a quantidade estrelas de 1 a 5: ");
  int leu_certo = scanf("%i", &nota);

  if(leu_certo) {
    switch(nota) {
      case 1: printf("Ruim\n"); break;
      case 2: printf("Insuficiente\n"); break;
      case 3: printf("Suficiente\n"); break;
      case 4: printf("Bom\n"); break;
      case 5: printf("Ótimo\n"); break;
      default: printf("Nota invalida\n"); break;
    }
  }
  /*if(nota == 1){
    printf("Ruim\n");
  }
  else if(nota == 2){
    printf("Insuficiente\n");
  }
  else if(nota == 3){
    printf("Suficiente\n");
  } 
  else if(nota == 4){
    printf("Bom\n");
  }
  else if(nota == 5){
    printf("Ótimo\n");
  } 
  else {
    printf("Nota Invalida\n");
  }*/
  else{
    printf("Erro ao ler. Tente novamente\n");
    }
  return 0;
  }