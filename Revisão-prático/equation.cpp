#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    int delta;
    int r = 0;
    delta = pow(b,2) - (4 * a * c);
    if(delta < 0){
        x1 = NAN;
        x2 = NAN;
        r = 0;
    }else if ( delta == 0){
        r = 1;
        x1 = double(-b) / (2*a);
        x2 = NAN;
    }else{
        r = 2;
        x1 = double(-b - sqrt(delta)) / (2 * a);
        x2 = double(-b + sqrt(delta)) / (2 * a);
    }
    return r;   
}


int main(){
    { double x1, x2;
  int r = solve_eq(1, -1, 0, x1, x2);
  cout << fixed << setprecision(7)
       << r << ' ' << x1 << ' ' << x2 << '\n'; }
    return 0;
}