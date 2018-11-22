//Programming Principles and Practice Using C++: Cap 4-Computation 
//Conversão de string em numeros

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

vector<string> s={"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove","dez"};
int num;

cout<<"Vamos converter seu numero para o nome do numero.Digite um numero de 1 a 10.\n";

while(cin>>num){
	cout<<num<<"\t"<<s[num]<<"\n";
	}
}

