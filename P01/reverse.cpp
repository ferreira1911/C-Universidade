#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    while(int(number) != 0){
        int rest = number % 10;
        cout << rest;
        number = int(number/10);
    }
    return 0;
}