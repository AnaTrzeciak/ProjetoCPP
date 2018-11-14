//Programming Principles and Practice Using C++: Cap 4-Computation 
//section 4.4.1.2 switch-statements
//comparação de unidades
//não pode usar string

#include<iostream>
#include<cmath>
using namespace std;

int main(){

constexpr double cm_por_pol=2.54;
double comp=1;
char unit='a';

cout<<"Entre com um comprimento seguido por uma unidade (c ou p): \n";
cin>>comp>>unit;

switch(unit){

 case 'p':
	cout<<comp<<"pol="<<cm_por_pol*comp<<"cm \n";
	break;
 case 'c':
	cout<<comp<<"cm="<<comp/cm_por_pol<<"pol \n";
	break;
 default:
	cout<<"Desculpe nós não reconhecemos essa unidade '"<<unit<<"'\n";
	break;
	}
}
