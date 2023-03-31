//Programa feito por: Ana Maria
//Em 28/02/2018

//Uso do __fpurge(stdin) para limpar memoria

#include <stdio.h> 

int main() 
{
  char l1, l2;

  printf("digita a letra ai meu filho \n");
  scanf("%c",&l1);

  __fpurge(stdin); 

  printf("digita a outra letra querido \n");
  scanf("%c", &l2);

 printf("voce digitou: %c %c \n",l1,l2);
}
