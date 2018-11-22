//Programming Principles and Practice Using C++: Cap 4-Computation: 4.4 Statements 

//if-statements

#include<iostream>
#include<cmath>
using namespace std;

int main(){

//int a=0;
//int b=0;

//cout<<"Entre com dois inteiros \n";
//cin>>a>>b;

//if(a<b)
//  cout<<"max("<<a<<","<<b<<") é "<<b<<"\n";

//else
//  cout<<"max("<<a<<","<<b<<") é"<<a<<"\n";
//}

 constexpr double cm_por_pole=2.54;
 double comp=1;

 char unit=' ';

 cout<<"Entre com um comprimento seguido por uma unidade (c ou p): \n";
 cin>>comp>>unit;

 if(unit=='p')
   cout<<comp<< " pol== "<<cm_por_pole*comp<< "cm \n";

 else if(unit=='c')
   cout<<comp<<" cm== "<<comp/cm_por_pole<< " pol \n";

 else
   cout<<"Desculpe, essa unidade não é reconhecida '"<<unit<<"'\n";
}
