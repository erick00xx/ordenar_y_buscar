#include<iostream>
#define MAX 30
using namespace std;

void inserción_directa(int A[], int n){
    int Aux,k;
    for(int i=1;i<n;i++){
        Aux = A[i];
        k = i - 1;
        while(k>=0 && Aux<A[k]){
            A[k+1]=A[k];
            k--; 
        }
        A[k+1]=Aux;
    }
}
    

int main(){
    int A[MAX];
    int n;
    cout<<"Numero de elementos: "; cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Dato n "<<i+1<<": "; cin>>A[i];
    }
    cout<<"Datos desordenados:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"  "<<A[i]<<" ";
    }
    cout<<endl<<"Datos ordenados:"<<endl;
    inserción_directa(A,n);
    for(int i=0;i<n;i++){
        cout<<"  "<<A[i]<<" ";
    }
    return 0;
}