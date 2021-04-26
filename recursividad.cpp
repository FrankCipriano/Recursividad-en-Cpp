#include <stdio.h>
#include <iostream>
using namespace std;

int potencia(int x, int n){
    int aux;
    if(n==0){
        return 1;
    }else{
        aux=potencia(x, n/2);
        if(n%2==0)
            return aux*aux;
            else
                return x*aux*aux;
    }
}
int main(){
    int numero, potenciar=0;
    cout<<"Ingrese el numero que desea elevar: \n";
    cin>>numero;
    cout<<"Ingrese la potencia a la que lo elevara: \n";
    cin>>potenciar;
    cout<<potencia(numero,potenciar);
    return 0;
}