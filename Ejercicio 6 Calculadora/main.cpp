//Calculadora//

#include <iostream>

using namespace std;

int main ()

{

      int r,r1,r2,r3,a,b;
      
      a=0;
      b=0;
      
      cout<<"Ingrese el valor para A"<< endl;
      cin>> a;
      
       cout<<"Ingrese el valor para B"<< endl;
      cin>> b;
      
      r=a+b;
      r1=a-b;
      r2=a*b;
      r3=a/b;
      
      cout<<"La suma de A + B tiene un total de; "  <<r<< endl;
      cout<<"La resta de A - B tiene un total de; "  <<r1<< endl;
      cout<<"La multiplicacion de A * B tiene un total de; "  <<r2<< endl;
      cout<<"La divicion de A / B tiene un total de; "  <<r3<< endl;
      
      
	return 0;
}
