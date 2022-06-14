#include<iostream>
#define MAX 30
using namespace std;

void busqueda_bi(int A[], int n, int dato){
    bool band = 0;
    int left = 0, right = n, mid;
    cout<<A[mid]<<endl;
    mid = (left+right)/2;
    while(left<=right && A[mid]!=dato){
        if(A[mid]==dato){
            band = true; break;
        }
        if(dato>A[mid]){
            left = mid+1;
        }
        if(dato<A[mid]){
            right = mid-1;
        }
    }
    if(band){
        cout<<"Dato en el sub indice A["<<mid<<"]"<<endl;
    }
    else cout<<"Dato en el sub indice A[-"<<mid<<"]"<<endl;
    mid = (left+right)/2;
}

int main(){
    int A[MAX] = {1,2,3,4,5,6,7};
    int n = 7;
    int dato;
    cout<<"Que dato deseas buscar: "; cin>>dato;
    busqueda_bi(A,n,dato);
}