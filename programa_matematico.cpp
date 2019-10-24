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

    return=0;
}

