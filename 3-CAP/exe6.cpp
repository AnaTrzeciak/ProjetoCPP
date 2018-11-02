//Programa criado em 02/11/2018
//Por: Ana Maria
//Exercícios capitulo 3

//Exercicio 6

#include<iostream>
#include<cmath>
using namespace std;

int main(){

  int a=0;
  int b=0;
  int c=0;
  int menor=0;
  int medio=0;
  int maior=0;

  cout<<"Vamos colocar os numeros em ordem crescente. Por favor digite 3 numeros inteiros: \n";
  cin>>a>>b>>c;

  if(a>=b && a>=c){
      maior= a;
     if(b>=c){
       medio= b;
       menor= c;
     }
     else{
       medio= c;
       menor= b;
     }
   }
  else if(b>=a && b>=c){
         maior= b;
     if(a>=c){
       medio= a;
       menor= c;
     }
     else{
       medio= c;
       menor= a;
     }
  }
 else{
       maior= c;
     if(a>=b){
       medio= a;
       menor= b;
     }
     else{
       medio= b;
       menor= a;
     }
  }

 cout<<"Os valores em ordem crescente são: "<<menor<< " ,"<<medio<<" ,"<<maior<<".\n"; 
 
return 0;
}  














