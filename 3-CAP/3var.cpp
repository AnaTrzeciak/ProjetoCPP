//Programming Principles and Practice Using C++: Secão 3.3 Input and Type
//int  inteiros
//char caracter individual
//double numeros nao inteiros
//string conjunto de caracter
//bool variaveis logicas

#include<iostream>
using namespace std;

/*
int main()
{
   string nome;
   int idade;

   cout<< "digite seu nome \n";
   cin>> nome;
   cout<< "Agora, digite sua idade \n";
   cin>> idade;
   cout<< "Ola "<<nome<<", sua idade é "<<idade<<"! \n";
}*/
//a string só le palavras antes do espaço, espaço em branco nao le 
//o programa abaixo le duas palavras

int main()
{
    string nome1,nome2;
    int idade;
 
    cout<< "Digite seu nome, sobrenome e idade\n";
    cin>> nome1>>nome2>>idade;      //leia 2 string e um inteiro
    cout<< "Olá, "<<nome2<<" "<<nome2<<", sua idade é "<<idade<<" anos. \n";
} 
