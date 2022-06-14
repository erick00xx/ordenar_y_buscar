#include<iostream>
#define MAX 30
using namespace std;


void busqueda_sec(int A[], int n, int dato){
    int i = 0;
    bool band = 0;
    while(i<n){
        if(dato==A[i] && band == false){
            cout<<"Dato en el sub indice: A["<<i<<"]"<<endl;
            band = true;
        }
        i++;
    }
    if(!band){
        cout<<"El dato a buscar no fue encontrado."<<endl;
    }
}

int main(){
    int A[MAX] = {1,2,3,4,5,6,7};
    int n = 7;
    int dato;
    cout<<"Que dato deseas buscar: "; cin>>dato;
    busqueda_sec(A,n,dato);
}