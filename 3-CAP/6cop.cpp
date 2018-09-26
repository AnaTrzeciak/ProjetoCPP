//Programming Principles and Practice Using C++:3.6 Composite assignment operators 

#include<iostream>
#include<cmath>
using namespace std;

//Programa que detecta palavra repetida e mostra onde ela está na sequencia

int main(){

    int n_palavras= 0;     //numero de palavras
    string previa= " ";
    string atual;

     while(cin>>atual){
         ++n_palavras;
	if(previa==atual)
	  cout<< "numero de palavras:"<< n_palavras 
	      <<"\n repetida:"<<atual<< '\n';
	previa=atual;
	}
return 0;
}



 	  
    


