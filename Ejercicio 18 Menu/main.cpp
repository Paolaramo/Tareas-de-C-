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
        cin >> opcion ;

        si (opción == 1 )
        {
            sistema ( " cls] " );
            cout << " Estas en el menu CAFE Y GRANITAS " << endl;
            sistema ( " pausa " );
            
        }

         si (opción == 2 )
        {
            sistema ( " cls " );
            cout << " Estas en el menu REPOSTERIA " << endl;
            sistema ( " pausa " );
            
        }

         si (opción == 0 )
        {
            romper ;  
        }

        cout << endl;
        cout << " Saliste del sistema " ;
         devolver  0 ;
    }
}
