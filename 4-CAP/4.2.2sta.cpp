//Programming Principles and Practice Using C++: Cap 4-Computation 
//section 4.4.1.2 switch-statements
//comparação de unidades
//não pode usar string

#include<iostream>
#include<cmath>
using namespace std;

int main(){

//Caso onde queremos a mesma mensagem para um conjunto de casos

char a;

cout<<"Entre com um digito \n";
cin>>a;

switch(a){
 case '0':case '2':case '4':case '6':case '8':
	cout<<"É par!\n";
	break;
 case '1':case '3':case '5':case '7':case '9':
	cout<<"É impar!\n";
	break;
 default:
	cout<<"Não é um digito\n";
	break;
	}
}
