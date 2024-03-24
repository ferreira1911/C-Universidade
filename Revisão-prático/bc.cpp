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

int main(){
    cout << bc(20, 10) << '\n';
    cout << bc(5, 2) << '\n';
    return 0;
}