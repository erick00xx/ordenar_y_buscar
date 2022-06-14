#include<iostream>
#define MAX 30
using namespace std;

void burbuja(int A[], int n){
    int Aux;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                Aux = A[j];
                A[j] = A[j+1];
                A[j+1] = Aux;
            }
        }
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
    burbuja(A,n);
    for(int i=0;i<n;i++){
        cout<<"  "<<A[i]<<" ";
    }
    return 0;
}