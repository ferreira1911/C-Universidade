#include <iostream>

using namespace std;

unsigned long bc(unsigned long n, unsigned long k){
    long int value1 = 1;
    long int value2 = 1;
    long int value3 = 1;
    for(int i=k; i >= 1; i--){
        value1 = value1 * i;
    }
    for(int i=n; i >= 1; i--){
        value2 = value2 * i;
    }
    for(int i=n-k; i >= 1; i--){
        value3 = value3 * i;
    }
    return value2/(value1*value3);
}

unsigned long bell(unsigned long n){
    if(n <= 1){
        return 1;
    }
    unsigned long sum = 0;
    for(int i=n-1; i >= 0; i--){
        sum += bc(n-1,i)*bell(i);
    }
    return sum;
}
