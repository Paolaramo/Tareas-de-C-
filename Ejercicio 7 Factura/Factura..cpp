#include <iostream>

using namespace std;

int main()

{

    int subtotal=0;
    int total=0;
    int impuesto=0.15; 

    
     
    cout << "Ingrese Subtotal de la Factura"<<endl;
	cin >> subtotal;
	
		total=subtotal+(subtotal*0.15);
	
	
	cout << endl;
	cout << "Total a Pagar;"<<total;
	
	return 0;
}
