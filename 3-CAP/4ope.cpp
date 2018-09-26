//Programming Principles and Practice Using C++: 3.4 Operations and Operators

#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
   double n;

   cout<< "Por favor insira um numero \n";
   cin>> n;
   cout<< "n="<<n
       << "\n n+1="<< n+1
       << "\n n*3="<< 3*n
       << "\n n+n="<< n+n 
       << "\n n*n="<< n*n
       << "\n n/2=" << n/2
       << "\n raiz quadrada de n="<< sqrt(n)
       << "\n\n";
}
