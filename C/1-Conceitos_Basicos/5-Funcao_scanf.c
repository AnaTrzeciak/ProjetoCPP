//Função scanf: recebe valores do usuário
//Programa feito por: Ana Maria
//Feito em: 1/02/2018

#include <stdio.h>

int main()
/*
{
   int num;

   printf("Digite o numero que voce quiser, pois não sou obrigada a nada:  ");
   scanf("%d", &num);

   printf("O numero que a bunita escolheu foi: %d \n", num); 
}*/

/*{
   float num1, num2, resultado;

   printf("Vamos fazer uma brinks, vou pedir dois numeros e voce digite. Então, escolha o primeiro. \n\n");
   scanf("%f", &num1);

   printf("Ai que coisa linda, muito que bem agora escolha outro.\n\n");
   scanf("%f", &num2);

   //resultado= num1+num2;
   resultado= num1/num2;    

   printf("E agora a soma/divisão dos dois numeros são: %0.3f \n", resultado);
}*/

//É possivel por mais de dois numeros dentro do scanf: %d %d, num1, num2
//para numero decimais é so trocar int por float ou double
//eh isto 
//Receber letras com scanf, use char e %c, mesma sintaxe

//Função getchar

/*{
 char letra;

 printf("Digite uma letra ai por favor. \n");
 letra= getchar(); 
 
 printf("Voce digitou esta porcaria: '%c' \n",letra);
}*/

//Funções fgetc e getc

{
   char l1,l2;

   printf("Agora o bunito, digita duas letras ai pra mim. \n");
   l1= getc(stdin);
   l2= getc(stdin);

   printf("Voce digitou: %c e %c. PARABENS \n", l1,l2);
}
