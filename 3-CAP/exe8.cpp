//Programming Principles and Practice Using C++: Exercicio 8
//Feito por: Ana Maria
//em: 02/11/2018
//8-Write a program to test an integer value to determine if it is odd or even.

#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int num ;
 
  cout<<"Vamos determinar se um numero é par ou impar. Digite um numero: \n";
  cin>>num;

  if(num%2==0){
    cout<<"O numero "<<num<<" é par \n";
  }
  else{
   cout<<"O numero "<<num<<" é impar \n";
  }

}

