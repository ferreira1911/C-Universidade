#include <iostream>

using namespace std;


unsigned long next_mersenne(unsigned long n){
    unsigned long mersennenumb = 0;
    unsigned long  power = 1;
    int cont = 1;
    while (mersennenumb < n){
        power = power*2;
        mersennenumb = power - 1;
        cont++;
    }
    return mersennenumb;
}
