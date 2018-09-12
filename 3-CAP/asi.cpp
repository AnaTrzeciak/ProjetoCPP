//Programming Principles and Practice Using C++: 3.5 Assignment and initialization

#include<iostream>
#include<cmath>
using namespace std;
//programa de detectação de palavras repetidas


int main()
{
    string previa= " ";
    string palavra;    
  
	while(cin>>palavra){
	  if(previa==palavra)  //checa se a palavra é a mesma da ultima
	   cout<< "palavra repetida:" <<palavra<< '\n';
	previa= palavra;
	}
}

