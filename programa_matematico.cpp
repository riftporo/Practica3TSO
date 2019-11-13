int promedio(){
    int n;
    float a,c=0,promedio;
    
    cout<<"Ingrese la cantidad de calificaciones a evaluar: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese la calificacion "<<i+1<<": ";
        cin>>a;
        c=c+a;
    }
    
    promedio=c/n;
    cout<<"El promedio es: "<<promedio;
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

