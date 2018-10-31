//Programming Principles and Practice Using C++: 3.9 Type Safety: Section 3.9.2 Unsafe Conversions
//Feito por: Ana Maria 
//Em: 4/10/2018
//Modificado em 30/10/2018

#include<iostream>
#include<cmath>
using namespace std;

//int main(){

//	int a= 2000000;
//	char c= a;
//	int b= c;

//	if(a!=b)
//	   cout<< "oops:" <<a<< "é diferente de" <<b<< '\n';
//	else

//	   cout<< "Nós temos um novo caracter \n";
//}
//o valor do inteiro não pode ser representado pelo char. Não é suportado.

//Programm 2

//Mostra conversoes de double para int e int para char na maquina, e tambem mostra qual caractere será impressa para um determinado valor inteiro.


int main(){

	double d= 0;
	while (cin>>d){

	int i= d;
	char c= i;
	int i2= c;

	cout<< "d==" <<d<<"\n i=="<<i<<"\n i2=="<<i2<<"\n caractere é ("<<c<<")\n";
        }
return 0;
}
