#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    if(c >= '0' && c <= '9'){
        cout << "DIGIT";
    }else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout << "LETTER";
    }else{
        cout << "OTHER";
    }
    return 0;
}