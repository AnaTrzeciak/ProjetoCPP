//Programa criado em 09/08/2019 
//Por: Ana Maria
//Exercícios capitulo 3
//Write a program that prompts the user to enter two integer values. Store
//these values in int variables named val1 and val2 . Write your program to
//determine the smaller, larger, sum, difference, product, and ratio of these
//values and report them to the user.

#include<iostream>
#include<cmath>
using namespace std;

float divisao(int x, int y){
	return x/y;
}

int main(){

int val1;
int val2;
int som;
int prod;
float divi;

cout<<"Insira dois valores inteiros\n";
cin>>val1>>val2;

if(val1>=val2){
 cout<<"O valor "<<val1<<" é maior que o valor "<<val2<<"\n";
}

else{
 cout<<"O valor "<<val2<<" é maior que o valor "<<val1<<"\n";
}

som=val1+val2;
cout<<"A soma é: "<<som<<"\n";

prod=val1*val2;
cout<<"O produto é: "<<prod<<"\n";

divi=divisao(val1,val2);
cout<<"A divisao é "<<divi<<"\n";

return 0;
}
