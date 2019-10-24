
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <math.h>

using namespace std;

int potencia(){
 int e, b;
 cout << "Ingrese la base: " << endl;
 cin >> b;
 cout << "A que exponente desea elevar la base" << endl;
 cin >> e;
 int R = pow(b,e);
 cout <<"La base "<< b << " elevada a la " << e << endl;
 cout <<"Es Igual a = "<< R << endl;
}

int pares(){
 int i, numero, pares, impares;

    pares = 0;
    impares = 0;

    for ( i = 1 ; i <= 5 ; i++ )
    {
        printf( "\n   Introduzca un n%cmero entero %d: ", 163, i );
        scanf( "%d", &numero );

        if ( numero % 2 == 0 )
            pares++;
        else
            impares++;
    }

    printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 163, impares );

    getch(); /* Pausa */

    return 0;
}

int promedio(){
    int n;
    float a,c=0,promedio;
    
    cout<<"Ingrese la cantidad de calificaciones a evaluar: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese la calificacion "<<i+1<<":";
        cin>>a;
        c=c+a;
    }
    
    promedio=c/n;
    cout<<"El promedio es:"<<promedio;
}

int factorial(){
    int i, factorial=1 ,numero; // declaramos nuestras variables inicializando factorial en 1
   
    cout << "Ingresa en numero a calcular "; // solicyamos el numero a sacra factorial 
    cin >> numero; // guardamos el valor en nuestra variable numero 
    if(numero < 0 ) factorial = 0; // condicional para detectar si el numero es negativo 
    else if(numero == 0) factorial = 1; // condicional para vel si el numero seleccionado es 0  
    else {// de lo contrario a la concional quere decir que es un numero diferente de 0 y no es negativo
        for (i = 1; i <= numero; i++) { // inicializamos i en 1, si i es <= numero entra al bucle e increementa i 
            factorial = factorial * i; // la variable de factorial toma su mismo valor multiplicado por el numero de iteraciones de i hahsta llegar a su limite 
        }
    }
    cout<< "El factorial del numero seleccionado es:"; // mandamos mensaje para afirmar que la operacion se a concretado 
    cout<< factorial; // arrojamos el resultado que esta guardado en la variable factotial 
    
    return 0;
}


int main()
{
    bool flag=false;
    int tecla;
    
    do{
        cout<<"Menu"<<endl;
        cout<<"1 - Potencia"<<endl;
        cout<<"2 - Factorial"<<endl;
        cout<<"3 - Num. Pares"<<endl;
        cout<<"4 - Promedio"<<endl;
        cout<<"5 - Salir"<<endl<<endl;
        
        cout<<"Elige una opcion: ";
        cin>>tecla;
        
        switch(tecla){
        case 1:
            cout<<"Elejiste Potencia \n";
            potencia();
            break;
        case 2:
            cout<<"Elejiste Factorial \n";
        factorial();
            break;
        case 3:
            cout<<"Elejiste Num. Pares \n";
			pares();
            break;
        case 4:
            cout<<"Elejiste Promedio \n";
		promedio();
            break;
        case 5:
            return 0;
    }
        
    }while(flag!=true);
    
    
}
