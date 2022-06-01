//Calculadora para sumar y restar//

#include <iostream>

using namespace std;

int main ()

{

      int r,r1,r2,r3,y,z;
      
      y=0;
      z=0;
      
      cout<<"Ingrese el valor para Y"<< endl;
      cin>> y;
      
       cout<<"Ingrese el valor para Z"<< endl;
      cin>> z;
      
      r=y+z;
      r1=y-z;
      r2=y*z;
      r3=y/z;
      
      cout<<"La suma de Y + Z tiene un total de; "  <<r<< endl;
      cout<<"La resta de Y - Z tiene un total de; "  <<r1<< endl;
      cout<<"La multiplicacion de Y * Z tiene un total de; "  <<r2<< endl;
      cout<<"La divicion de Y / Z tiene un total de; "  <<r3<< endl;
      
      
	return 0;
}
