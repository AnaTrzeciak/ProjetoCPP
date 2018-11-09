//Programming Principles and Practice Using C++: Cap 4-Computation 

//Programa que converte ieni para euro ou libras.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
 
 constexpr double euro_para_ieni=129.84;  //1 euro=129.84 ieni
 constexpr double euro_para_libra=0.87;   //1 euro=0.87 libras
 constexpr double libra_para_ieni=149.10;
 
 double valor=1;
 char unit=' ';

 cout<<"Entre com o valor que deseja converter e tambem com a unidade, e(euro), l(libras) ou i(ieni)\n";
 cin>>valor>>unit;

 if(unit=='e')
  cout<<valor<<" euro(s)="<<valor*euro_para_ieni<<" ienis e "<<valor*euro_para_libra<<" libras \n";
 
 else if(unit=='l')
  cout<<valor<<" libra(s)="<<valor/euro_para_libra<<" euro(s) e "<<valor*libra_para_ieni<<" ienis \n";
  
 else if(unit=='i')
  cout<<valor<<" ieni(s)="<<valor/euro_para_ieni<<" euros e "<<valor/libra_para_ieni<<" libras\n";
 
 else
  cout<<"Desculpe nos não reconhecemos essa unidade '"<<unit<<"'\n";
}
