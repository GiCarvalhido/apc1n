#include <stdio.h> //printf - escreve no console; scanf - ler do console

int main () {
  char item1[61] = "";
  int quantidade1 = 0;
  float preco1 = 0.0f;

  char item2[61] = "";
  int quantidade2 = 0;
  float preco2 = 0.0f;

  char item3[61] = "";
  int quantidade3 = 0;
  float preco3 = 0.0f; 

  printf("Entre com o nome do item1: ");
  scanf("%s",item1);
  printf("Entre com a quantidade do item1: ");
  scanf("%i", &quantidade1);
  printf("Entre com o preço do item1: ");
  scanf("%f", &preco1);

  printf("Entre com o nome do item2: ");
  scanf("%s",item2);
  printf("Entre com a quantidade do item2: ");
  scanf("%i", &quantidade2);
  printf("Entre com o preço do item2: ");
  scanf("%f", &preco2);
  
  printf("Entre com o nome do item3: ");
  scanf("%s",item3);
  printf("Entre com a quantidade do item3: ");
  scanf("%i", &quantidade3);
  printf("Entre com o preço do item3: ");
  scanf("%f", &preco3);

  float total = quantidade1 * preco1; total = total + quantidade2 * preco2; total = total + quantidade3 * preco3; 
  
  printf("------------------------\n");
  printf("       NOTA LEGAL       \n");
  printf("------------------------\n");
  printf("Item       Qtd     Valor\n");
  printf("%-10.10s %03i %9.2f\n", item1, quantidade1, preco1);
  printf("%-10.10s %03i %9.2f\n", item2, quantidade2, preco2);
  printf("%-10.10s %03i %9.2f\n", item3, quantidade3, preco3);
  printf("------------------------\n");
  printf("Total       R$ %9.2f\n", total);
  printf("------------------------\n");
  
  return 0;
}