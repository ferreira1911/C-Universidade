#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
    double x = 0;
    int k;
    int d;
    cin >> k;
    cin >> d;
    for(int i=0; i <= k; i++){
        x = x + double(pow(-1,i)) / (2 * i + 1);
    }
    x = 4 * x;

    cout << fixed << setprecision(d) << x ;
    return 0;
}
