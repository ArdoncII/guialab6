#include "iostream"
#include "stdlib.h"

using namespace std;

void pedir_conjunto1();
void pedir_conjunto2();
void suma_conjun();
void mostrar_suma();

int numconjun,*conjunto1,*conjunto2,suma,*conjunsuma;

int main(){

    pedir_conjunto1();
    pedir_conjunto2();
    suma_conjun();
    mostrar_suma();
    delete[] conjunto1,conjunto2,conjunsuma;

}

void pedir_conjunto1(){
    cout<<"Digite numero de elementos: "<<endl;
    cin>>numconjun;
    conjunto1 = new int[numconjun];

    for (int i=0;i<numconjun;i++){
        cout<<"ingrese un entero: ";
        cin>>conjunto1[i];
    }
}
void pedir_conjunto2(){
    cout<<"Digite numero de elementos: "<<endl;
     cin>>numconjun;
     conjunto2 = new int[numconjun];
    for (int i=0;i<numconjun;i++){
        cout<<"ingrese un entero: ";
        cin>>conjunto2[i];
    }
}
void suma_conjun(){ 
for (int i=0;i<numconjun;i++){
    suma=conjunto1[i]+conjunto2[i];
    conjunsuma[suma];  
  }
 }
void mostrar_suma(){
    cout<<"\n mostrando enteros del tercer conjunto:\n";
    
    for (int i = 0; i< numconjun ; i++)
    {
        cout<<conjunsuma[i]<<endl;
    }
    
}