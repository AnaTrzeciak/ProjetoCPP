//Programming Principles and Practice Using C++: Cap 4-Computation 

//crtl+d terminada de ler a entrada de palavras

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

vector<string>words;

for(string temp;cin>>temp;)
	words.push_back(temp);
	cout<<"Numero de palavras: "<<words.size()<<'\n';

sort(words);

for(int i=0;i<words.size();++i)
 if(i==0|| words[i-1]!=words[i])  //esse teste elimina palavras repetidas
  	cout<<words[i]<<"\n";
}
