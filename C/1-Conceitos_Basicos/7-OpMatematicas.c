//Progrema feito por: Ana Maria
//Em 28/02/2018
//Modificado em: 

//Operações Matematicas

#include <stdio.h> 

int main()
{ 
 float n1, n2, soma, sub, mult, div;

 printf("voce vai digitar dois numeros pra mim fofo. Vai la, o primeiro é:  \n");
 scanf("%f", &n1);

 printf("o outro agora \n");
 scanf("%f", &n2); 

 soma= n1+n2;

 sub= n1-n2;

 mult= n1*n2;

 div= n1/n2;

 printf("A soma é: %0.2f. A subtração é: %0.2f. A multiplicação é: %0.2f. A divisão é: %0.2f \n", soma, sub, mult, div);
}

//Atalho das operações
//soma: +=
//sub: -=
//mult: *=
//div: /=
//modulo: %=
