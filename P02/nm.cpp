#include <iostream>

using namespace std;

unsigned long next_mersenne(unsigned long n){
    unsigned long mersennenumb = 0;
    unsigned long  elevad = 1;
    int cont = 1;
    while (mersennenumb < n){
        elevad = elevad * 2;
        mersennenumb = elevad - 1;
        cont++;
    }
    return mersennenumb;
}
int main(){

    return 0;
}