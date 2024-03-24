#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x1, x2, y1, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    int result;
    result = abs((x1-x2)) + abs((y1-y2));
    for(int i = 0; i < (n-2); i++){
        int xn,yn;
        cin >> xn;
        cin >> yn;
        result = result + abs((x2-xn)) + abs((y2-yn));
        x2 = xn;
        y2 = yn;
    }
    cout << result;
    return 0;
}