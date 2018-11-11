//Programming Principles and Practice Using C++: Cap 4-Computation Section 4.5 Function 

//#include<iostream>
//#include<cmath>
//using namespace std;

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

//int square(int x) //quadrado de um numero
//{
//	return x*x;
//}

//int main(){

//int a;
//	cout<<"Digite um numero: ";
//	cin>>a;
//	cout<<square(a);
//	cout<<"\n";
//return 0;
//}

//================================================================

void print_square(int v)
{
	cout<<v<<'\t'<<v*v<<'\n';
}

int main(){

for(int i=0;i<100;++i)
	print_square(i);
}



