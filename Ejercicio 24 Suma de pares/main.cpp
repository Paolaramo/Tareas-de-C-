#include <iostream>

using namespace std;

int main ()
{
int num,cont,cpar,cimpar,par,impar,total,limite;

cont=0;
cpar=0;
cimpar=0;
par=0;
limite=0;

cout<<"INGRESE LA CANTIDAD DE NUMEROS A SUMAR:";
cin>>limite;
cout<<endl;

  while ( cont < limite)
  {
  	cout<<"INGRESE NUMEROS PARES:";
	cin>>num;
  if ( num % 2 == 0)
  {
  	par = par + num;
  	cpar++;
  }
   cont++;
}

   cont++;

    cout<<endl;
	cout<<"LA SUMA DE LOS NUMERO PARES ES:"<<par<<endl;

	total = par + impar;
	cout<<"TOTAL ES:"<<total;

return 0;
}
