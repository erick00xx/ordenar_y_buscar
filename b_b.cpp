#include<iostream>
#define MAX 30
using namespace std;

int busqueda_bi(int A[], int n, int dato){
    int izq = 1;
    int der = n;
    int pos;
    int m = int((izq/der)/2);
    while(A[m]!=dato && izq<=der){
        if(dato<A[m]){
            der = m-1;
        }
        else izq = m+1;
        m = int((izq+der)/2);
    }
    if(izq<=der){
        pos = m;
    }
    else pos = -izq;
    return pos;
}

int main(){
    int A[MAX] = {1,2,3,4,5,6,7};
    int n = 7;
    int dato;
    cout<<"Que dato deseas buscar: "; cin>>dato;
    cout<<busqueda_bi(A,n,dato);
}