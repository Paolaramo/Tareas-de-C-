# incluir  < iostream >

utilizando el espacio de  nombres  estándar ;
 
int  principal ( int argc, char  const * argv[])
{
    int opcion = 0 ;

    mientras ( verdadero ){
        cout << " **** " << endl;
        cout << " MENÚ " << endl;
        cout << " **** " << endl;

        cout << endl;
        cout << " 1 - CAFE Y GRANITAS " << endl;
        cout << " 2 - REPOSTERIA " << endl;
        cout << " 0 - SALIR " << endl;

        cout << " Ingrese una opcion del menu: " ;
        cin >> opción;

        if (opcion == 0 ){
            romper ;
        }
       
        interruptor (opción)
        {
            caso  1 :
             {
                 sistema ( " cls] " );
                 cout << " Estas en el menu CAFE Y GRANITAS " << endl;
                sistema ( " pausa " );
                 romper ;
             }
            caso  2 :  
             {
                sistema ( " cls] " );
                cout << " Estas en el menu CAFE Y GRANITAS " << endl;
                sistema ( " pausa " );
                romper ;
             }
        predeterminado :
            {
                 cout << " Ingrese una opcion valida (0, 1, 2) " << endl;
                 sistema ( " pausa " );
                 romper ;
             }
        }
        cout << endl;
        cout << " Saliste del sistema " ;
         devolver  0 ;
    }
}
