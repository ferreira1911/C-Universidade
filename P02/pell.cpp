#include <iostream>

using namespace std;


unsigned long pell(unsigned long n){
    if( n == 0){
        return 0;
    } else if( n == 1){
        return 1;
    } else {
        unsigned long pm1 = 2;
        unsigned long pm2 = 1;
        unsigned long pn = 2;
        for (unsigned long i = 2; i < n; i++){
            pn = 2 * pm1 + pm2;
            pm2 = pm1;
            pm1 = pn;
        }
        return pn;
    }
    return 0;
}

int main(){
    
    return 0;
}