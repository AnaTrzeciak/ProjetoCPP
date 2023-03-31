//Programa definindo as variaveis float e double
//Criado em: 07/12/2017
//Editado em: 01/02/2018
//Feito por: Ana Maria

//Usamos float(4bytes) e double(8bytes) para numeros decimais
//%f para indicar o float


#include <stdio.h>
/*
int main()
{
    float pi = 3.14;
    double piDouble = 3.1415926535897932384626433832795;
    printf("Valor de pi %f\n", pi );
    printf("Valor de pi mais preciso %f\n", piDouble );
}
*/

//Numeros na forma exponencial
// float numero= xEy //significa x vezes 10 elevado a y   

int main()
{
     float salarioSonho= 1E6;
     float salarioReal= 10E-3;
	 
     printf("Meu salario é R$%.4f mas eu queria que fosse R$%0.1f \n", salarioReal, salarioSonho);
}
