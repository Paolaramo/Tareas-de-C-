#include <iostream>

using namespace std;

int main()

{

    int subtotal=0;
    int total=0;
    int impuesto=0; 

    char estaesenta;
     
    cout<<"Ingrese Subtotal de la Factura"<<endl;
	cin>>subtotal;
	
	cout<<"Factura Exenta ? S/N"<<endl;
	cin>>estaesenta;
	
	if(estaesenta == 'S' || estaesenta == 'S')
	
	{
	   total=subtotal;
	}
	else
	{
		total=subtotal+(subtotal*0.15);
	}
	
	cout<< "Total a Pagar;"<<total;
	return 0;
}
