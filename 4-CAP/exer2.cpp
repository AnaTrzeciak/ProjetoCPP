//Programming Principles and Practice Using C++: Cap 4-Computation 

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

double soma=0;
double min=0;
double max=0;

vector<double>distancia;

cout<<"Digite as distancias entre as cidades \n";

for(double val;cin>>val;)
	distancia.push_back(val);

for (double i:distancia)soma +=i;
cout<<"A distancia total entre as cidades é "<<soma<<"\n";

}
