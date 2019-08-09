//Programming Principles and Practice Using C++: 
//Feito por: Ana Maria
//Em 09/08/2019
//Exercicio 9: Write a program that converts spelled-out numbers such as “zero” and “two” into digits, such as 0 and 2

#include<iostream>
#include<cmath>

using namespace std;

int main(){

string s;

cout<<"Escreva um numero por extenso (de um a quatro): \n";
cin>>s;

if(s=="um")
  cout<<s<<" tem o valor 1. \n";

else if(s=="dois")
	cout<<s<<" tem o valor 2. \n";

else if(s=="tres")
	cout<<s<<" tem o valor 3.\n";

else if(s=="quatro")
	cout<<s<<" tem o valor 4.\n";


else 
	cout<<s<<" nao possui valor numerico.\n";
      
}
