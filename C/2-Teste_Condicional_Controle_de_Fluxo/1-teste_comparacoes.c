//Programa feito por: ANA MARIA
//Feito em: 05/03/2018
//Modificado em: 06/03/2018

//Teste de comparações

//operador igualdade: x==y le-se "x é igual a y?"
//operador maior que: x>y le-se "x é maior que y"
//operador menor que: x<y le-se "x é menor que y"
//operador maior igual a: x>=y
//operador menor igual a: x<=y
//operador diferente: x!=y le-se "x é diferente de y"
//operador modulo ou resto da divisão: x%y

#include <stdio.h>

/*int main () 
{ 

 int resul;
 
 printf("Vamo ver se os universitarios sabe mesmo. Quanto é 1+1? \n");
 scanf("%d", &resul); 

 if(resul == 2)
  {
    printf("parabens nao fez mais que sua obrigação de acertar isso \n");
  } 
  else 
  { 
    printf("para de ser burro menino \n"); 
  } 
}*/

/*int main () 
{
  int idade;

  printf("Vamos ver se pode entrar aqui na Woods seu topzera. Quantos anos vc tem? \n");
  scanf("%d", &idade);

  if(idade>17)
  {
   printf("voce é maior de idade entao passa logo pra entro seu hetero \n");
  } 
  else
  {
   printf("nao pode entrar nao, espera mais um tempo ai criança \n");
  } 
}*/

int main()
{
  int senha;

  printf("de 0 a 10 descubra que numero eu pensei \n");
  scanf("%d", &senha);

  if(senha!=4)
   {
    printf("ERROUUUUUUU \n");
   }
   else
   {
    printf("ACERTOUUUU \n");
   }
}
  
