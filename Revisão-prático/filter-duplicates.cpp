#include <iostream>
#include "print_array.h"

using namespace std;

int filter_duplicates(const int a[], int n, int b[]){
    int contadoraparab = 1;
    int anterior = a[0];
    b[0] = anterior;
    for(int i = 1; i < n; i++){
        if(a[i] != anterior){
            contadoraparab++;
            b[contadoraparab-1] = a[i];
            anterior = a[i];
        }
    }
    return contadoraparab;
}

int main(){
{ const int n = 12;
  const int a[n] = { 1, 2, 2, 3, 3, 3, 1, 1, 1, 2, 2, 3 };
  int b[n] = { 0 };
  int nf = filter_duplicates(a, n, b);
  print_array(b, nf); }
    return 0;
}