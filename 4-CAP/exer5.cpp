//Programming Principles and Practice Using C++: Cap 4-Computation 
//Calculadora


#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

double num1,num2;
char ope;

cout<<"Vamos calcular. Digite dois números e a operação desejada (+,-,* ou /)\n";
cin>>num1>>num2>>ope;

switch(ope){

 case '+':
	cout<<num1<<"+"<<num2<<"= "<<num1+num2<<"\n";
	break;
 case '-':
	cout<<num1<<"-"<<num2<<"= "<<num1-num2<<"\n";
	break;
 case '*':
	cout<<num1<<"x"<<num2<<"= "<<num1*num2<<"\n";
	break;
 case '/':
	cout<<num1<<"/"<<num2<<"= "<<num1/num2<<"\n";
	}
}
	




