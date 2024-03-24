#include <iostream>
#include "complex.h"

using namespace std;

complex add(complex a, complex b){
    complex r;
    r.real = a.real + b.real;
    r.img = a.img + b.img;
    return r;
}


complex mul(complex a, complex b){
    complex r;
    r.real = a.real * b.real - a.img*b.img;
    r.img = a.real * b.img + a.img * b.real;
    return r;
}

complex fazer(int i, complex c){
    complex resultado = {0,0};
    complex ant = {0,0};
    for(int j = 1; j <= i; j++){
        resultado = add(mul(ant,ant),c);
        ant = resultado;
    }
    return resultado;
}

void mandel(complex c, int n, complex z[]){
    for(int i = 0; i < n; i++){
        z[i] = fazer(i,c);
    }
}

int main(){
 	

{ complex c = { 1, 1 };
  const int n = 3;
  complex z[n];
  mandel(c, n, z);
  print(z, n); }
    return 0;
}