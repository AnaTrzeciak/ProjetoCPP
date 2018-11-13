//Programming Principles and Practice Using C++: Cap 4-Computation 

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

vector<string>words;

for(string temp;cin>>temp;)
	words.push_back(temp);
	cout<<"\n Numero de palavras: "<<words.size()<<'\n';

sort(words);

for(int i;i<words.size();++i)
	cout<<words[i]<<'\n';

}

