int n;
    float a,c=0,promedio;
    
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el numero "<<i+1<<":";
        cin>>a;
        c=c+a;
    }
    
    promedio=c/n;
    cout<<"el promedio es:"<<promedio;

    return=0;