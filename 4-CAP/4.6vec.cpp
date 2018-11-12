//Programming Principles and Practice Using C++: Cap 4-Computation Section 4.6 Vector

//sintaxe: vector<tipo>v={elementos} tipo=int, string, char
//vector<tipo>vi(6); vector de 6 elementos incializados em v

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

vector<int> v={1,2,3,4,5,6};
 
 for(int i=0;i<v.size();++i)  //v.size() fornece o numero de elementos do vetor chamado v
//o intervalo para um vetor é [0:v.size())
	cout<<v[i]<<'\n';
}

