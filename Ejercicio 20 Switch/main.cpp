# incluir  < iostream >

utilizando el espacio de  nombres  est�ndar ;
 
int  principal ( int argc, char  const * argv[])
{
    opci�n int ;
    cout << " Ingrese una opcion " ;
    cin >> opci�n;

    interruptor (opci�n)
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
