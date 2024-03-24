#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    cin >> num;
    int result = 0;
    int numbaux = num;
    int lennum = 0;
    while(numbaux != 0){
        numbaux = numbaux / 10;
        lennum++;
    }
    for(int i=(lennum-1); i >= 0; i--){
        result = result + ((num % 10) * pow(10,i));
        num = num / 10;
    }
    cout << result;
    return 0;
}