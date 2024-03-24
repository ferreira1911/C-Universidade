#ifndef __print_array_h__
#define __print_array_h__

#include <iostream>
using namespace std;

void print_array(const int a[], int n){
  cout << '[' << a[0];
  for (int i = 1; i < n; i++) {
    cout << ',' << a[i];
  }
  cout << "]\n";
}

#endif // __print_array_h__

int* ord(int len, int cneword[]){
    int val;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < (len-1); j++){
            if(cneword[j] > cneword[j+1]){
                val = cneword[j];
                cneword[j] = cneword[j+1];
                cneword[j+1] = val;
            }
        }   
    }
    return cneword;
}

int* merge_arrays(const int a[], int na, const int b[], int nb){
    int* cnew = new int[na + nb];
    for (int i = 0; i < na; i++){
        cnew[i] = a[i];
    }
    int cont = 0;
    for (int i = na; i < (na+nb);i++){
        cnew[i] = b[cont];
        cont++;
    }
    int* ptr =  ord(int (na+nb), cnew);
    return ptr;
}

int main(){
    { const int NA = 4, NB = 6;
  int a[NA] = { 1, 2, 4, 7};
  int b[NB] = { 0, 3, 5, 6, 8, 9};
  int* c = merge_arrays(a, NA, b, NB);
  print_array(c, NA+NB);
  delete [] c; }
    return 0;
}