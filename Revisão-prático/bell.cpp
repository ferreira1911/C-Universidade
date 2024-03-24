#include <iostream>

using namespace std;
unsigned long bc(unsigned long n, unsigned long k){
    unsigned long partecima = 1;
    unsigned long partebaixo = 1;
    unsigned long resultado = 0;
    for(unsigned long i = 0; i < k; i++){
        partebaixo = partebaixo * (k-i);
    }
    for(unsigned long j = 0; j < n; j++){
        partecima = partecima * (n-j);
        if( (n-k + 1) == (n-j)){
            break;
        }
    }
    resultado = partecima / partebaixo;
    return resultado;
}

unsigned long bell(unsigned long n){
    unsigned long resultado = 0;
    if(n == 0 || n == 1){
        return 1;
    }
    if(n >= 2){
        for(unsigned long k = 0; k < n; n++){
            resultado = resultado + bc(n-1,k)*bell(k);
        }
    }
    return resultado;
}

int main(){
    cout << bell(0) << '\n';
    cout << bell(1) << '\n';
    cout << bell(2) << '\n';
    cout << bell(3) << '\n';
    cout << bell(4) << '\n';
    cout << bell(6) << '\n';
    return 0;
}