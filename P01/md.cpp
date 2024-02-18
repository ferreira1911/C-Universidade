#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int soma = 0;
    int x1;
    int y1;
    int x2;
    int y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    if(x1 >= x2){
        soma += x1 - x2;
    }else{
        soma += x2 - x1;
    }
    if(y1 >= y2){
        soma += y1 - y2;
    }else{
        soma += y2 - y1;
    }
    for(int i=0; i<(n-2); i++){
        int xn;
        int yn;
        cin >> xn;
        cin >> yn;
        if(xn >= x2){
            soma += xn - x2;
        }else{
            soma += x2 - xn;
        }
        if(yn >= y2){
            soma += yn - y2;
        }else{
            soma += y2 - yn;
        }
        x2 = xn;
        y2 = yn;
    }
    
    cout << soma;
    return 0;
}