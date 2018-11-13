//Programming Principles and Practice Using C++: Cap 4-Computation 

// O caracter | finaliza a entrada de elementos

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

//calculando a media e a mediana das temperaturas

int main(){

vector<double>temp;

for(double valor;cin>>valor;)   //leia valor
	temp.push_back(valor);  //coloque valor no vetor

//media da temperatura

double soma=0;

for(int x:temp)soma+=x;
	cout<<"Media da temperatura é: "<<soma/temp.size()<<'\n';

//mediada da temperatura

sort(temp);  //ordenar temperaturas
cout<<"Mediada de temperatura é: "<<temp[temp.size()/2]<<'\n';

}
