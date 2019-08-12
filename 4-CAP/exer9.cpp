//Programming Principles and Practice Using C++: Cap 4-Computation 
//Exercicio 11:Create a program to find all the prime numbers between 1 and 100

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

vector<int> primo;

bool fun_primo(int n){

	for(int p=0;p<primo.size();++p)
		if(n%primo[p]==0) return false;
	return true;
}

int main(){

primo.push_back(2);

 for(int i=3; i<=100;++i)
	if(fun_primo(i)) primo.push_back(i);

 cout<<"Primos entre 1 e 100: \n";
 for(int p=0; p<primo.size(); ++p)
	cout<<primo[p]<< "\n";
}



  
