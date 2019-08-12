//Programming Principles and Practice Using C++: Cap 4-Computation 

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"


int main(){

vector<string> nome;
vector<int> idade;

string s; 
int i;

cout<<"Digite seu primeiro nome seguido de sua idade: \n";

 while(cin>>s>>i && s!="semNome"){

  for(int i=0;i<nome.size();++i)
	if(s==nome[i]) error ("nome duplicado: ",s);

  nome.push_back(s);
  idade.push_back(i);
 }

 for(int i=0;i<nome.size();++i)
 	cout<<nome[i]<<"\t"<<idade[i]<<"\n";

}



