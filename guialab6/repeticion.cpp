#include "iostream"

using namespace std;

int main(){

     
     int arreglo[10],i,n,contador=0,posicion=0;

     int tamano= sizeof(arreglo)/sizeof(arreglo[0]);

     cout<<"\nTamano limite de enteros: "<<tamano<<endl<<endl;


     for(i=0;i<10;i++){
        cout<<"Ingrese el entero  "<<"posicion:"<<++posicion<<endl;
        cin>>arreglo[i];
          
    }
     cout<<endl;
     cout<<"los numeros ingresados fueron:"<<endl;
        for(i=0;i<tamano;i++){
        cout<<arreglo[i]<<endl;
    }
     cout<<"Digite un entero de la lista antes ingresada para saber su numero de repeticiones:"<<endl;
     cin>>n;

        for (i=0;i<10;i++){
		if (n==arreglo[i]){
			contador++;
		}
	}
        cout<<"el numero se repite "<<contador<<" veces"<<endl;


    return 0;
}