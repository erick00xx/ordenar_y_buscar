#include<iostream>
#define MAX 30
using namespace std;

void seleccion_directa(int A[], int n){
    int menor,k;
    for(int i=0;i<n-1;i++){
        cout<<endl;
        menor = A[i];
        k = i;
        for(int j=i+1;j<n;j++){
            if(menor>A[j]){
                menor = A[j];
                k = j;
            }
        }
        A[k] = A[i];
        A[i] = menor;
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
    seleccion_directa(A,n);
    for(int i=0;i<n;i++){
        cout<<"  "<<A[i]<<" ";
    }
    return 0;
}