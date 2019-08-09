//Programming Principles and Practice Using C++: Cap 4-Computation 
//Exercicio 18: resolver a equação de 2° grau.

#include"/home/anatrzeciak/Documentos/GitHub/ProjetoCPP/std_lib_facilities.h"

double delta(double a, double b, double c)
{	 
	return b*b-(4*a*c);	
}

int main(){
 double a=0;
 double b=0;
 double c=0;

 cout << "A equação de 2° grau tem a forma: ax²+bx+c=0. Portanto informe a,b,c.\n";
 cin >> a >> b >> c;
 cout << "a= " << a<<"\n";
 cout << "b= "<< b << "\n";
 cout << "c= "<< c <<"\n";
 
 double d=delta(a,b,c);
 
 if(a==0){

	cout << "A função não é de segundo grau.\n";
 }
 else if(d<0){
 	cout << "\nAs raízes estão no campo dos complexos.\n"; //x1=\n <<(-b + sqrt(delta))/(2*a)<< "x2=" <<(-b - sqrt(delta))/(2*a)<<"\n";
      }
      if(d==0){
	cout << "\nPossui apenas uma raiz. x1= " << (-b)/(2*a) << "\n";
      }
      if (d>0){
	cout <<"\nPossui duas raizes reais.\nx1= " <<(-b + sqrt(d))/(2*a)<< "\nx2= " <<(-b - sqrt(d))/(2*a)<<"\n";
      
      }
}

 
