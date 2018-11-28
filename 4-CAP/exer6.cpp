//Programming Principles and Practice Using C++: Cap 4-Computation 
//Conversão de string em numeros
//Exercicio 6

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

int main(){

  vector<string> s= {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez"};
  vector<string> s2= {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
  string input;

  cout << "Vamos converter seu numero para o nome do numero.Digite um numero de 0 a 10.\n";
 
  while(cin>>input){
	for(int i=0;i<s.size();++i){
	  if(input==s[i]) cout << i << "\n";
	  if(input==s2[i]) cout << s[i]<< "\n";
	  }
       }
}
