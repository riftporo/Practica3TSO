
#include <iostream>
#include <cstdlib>

using namespace std;

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
            
            break;
        case 2:
            cout<<"Elejiste Factorial \n";
            break;
        case 3:
            cout<<"Elejiste Num. Pares \n";
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