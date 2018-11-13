//Programming Principles and Practice Using C++: Cap 4-Computation Section 4.6 Vector

//sintaxe: vector<tipo>v={elementos} tipo=int, string, char

//vector<tipo>vi(6); vector de 6 elementos incializados em v

//push_back(): adiciona um novo elemento no vetor

//push_back() é um member fuction call. A sintaxe para chamo-lo é: 
 //member-fuction-cal:
	//object_name.member-function-name(argument-list)


#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

//vector<int> v={1,2,3,4,5,6};
 
 //for(int i=0;i<v.size();++i)  //v.size() fornece o numero de elementos do vetor chamado v
//o intervalo para um vetor é [0:v.size())
//	cout<<v[i]<<'\n';


//for(int x:v) //para cada x em v
//	cout<<x<<'\n';
//}

//==============================================================

vector<double>temps;
 for(double temp;cin>>temp;)
	temps.push_back(temp);
}
