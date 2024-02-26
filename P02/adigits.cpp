#include <iostream>
#include <algorithm>

using namespace std;

int adigits(int x, int y, int z){
    int result = 0;
    int a = max(x,max(y,z));
    if(a == x){
        result = a*100 + max(y,z)*10 + min(y,z);
    }else if(a == y){
        result = a*100 + max(x,z)*10 + min(x,z);
    }else{
        result = a*100 + max(y,x)*10 + min(y,x);
    }
    return result;
}


int main(){
    cout << adigits(1, 0, 0) << '\n';
    return 0;
}