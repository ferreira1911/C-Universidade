#include <iostream>

using namespace std;

int adigits(int a, int b, int c){
    int result=0;
    if(a > b){
        if(a > c){
            result = result + a * 100;
            if(b > c){
                result = result + b * 10;
                result = result + c;
            }else{
                result = result + c * 10;
                result = result + b;
            }
        }else{
            result = result + c * 100;
            result = result + a * 10;
            result = result + b;
        }
    }else{
        if(b > c){
            result = result + b * 100;
            if(a > c){
                result = result + a * 10;
                result = result + c;
            }else{
                result = result + c * 10;
                result = result + a;
            }
        }else{
            result = result + c * 100;
            result = result + b * 10;
            result = result + a;
        }
    }

    return result;
}


int main(){
    cout << adigits(1,9,2) << '\n';
    return 0;
}