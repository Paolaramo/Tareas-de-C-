# incluir  < iostream >

utilizando el espacio de  nombres  estándar ;
 
int  principal ( int argc, char  const * argv[])
{
    opción int ;
    cout << " Ingrese una opcion " ;
    cin >> opción;

    interruptor (opción)
    {
        caso  1 :
            cout << " Escogiste 1 " << endl;
            romper ;
        caso  2 :
            cout << " Escogiste 2 " << endl;
            romper ;
        caso  3 :
            cout << " Escogiste 3 " << endl;
            romper ;
        predeterminado :
            cout << " Ingrese una opcion entre 1 y 3 " << endl;
            romper ;
    }
    devolver  0 ;
}
