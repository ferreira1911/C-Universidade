#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int k;
    int d;
    cin >> k;
    cin >> d;
    double result = 0;
    for(int i=0; i <= k; i++){
        if(i % 2 == 0){
            result = result +  (1 / double(2*i + 1));
        }else{
            result = result +  (-1 / double(2*i + 1));
        }
    }
    result = result  * 4;
    cout << fixed << setprecision(d) <<result << endl;
    return 0;
}