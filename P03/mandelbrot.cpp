#ifndef __complex_h__
#define __complex_h__

#include <cmath>

// Representation of a complex number z = x + y i
struct complex {
  double x; // Real part
  double y; // Imaginary part
};

complex add(const complex& a, const complex& b){
    complex r;
    r.x = (a.x + b.x);
    r.y = (a.y + b.y);
    return r;
}
complex mul(const complex& a, const complex& b){
    complex r;
    r.x = (a.x*b.x - a.y*b.y);
    r.y = (a.x*b.y + b.x*a.y);
    return r;
}
double norm(const complex& c){
    double a = sqrt(c.x*c.x + c.y*c.y);
    return a;
}

void mandelbrot(const complex& c, unsigned int n, complex& z_n){
    complex ant {0,0};
    for(unsigned int i = 1; i <= n; i++){
        ant = add(mul(ant,ant),c);
    }
    z_n = ant;
}

#include <iostream>
#include <iomanip>
using namespace std;

ostream& operator<<(ostream& out, const complex& c) {
  return out << fixed << setprecision(3) 
             << c.x 
             << (c.y >= 0.0 ? "+" : "")
             << c.y << "i";
}

#endif // __complex_h__

int main(){
    { complex z_n;mandelbrot({1, 1}, 2, z_n);cout << z_n << '\n'; }
    { complex z_n;mandelbrot({-1.2, 0.4}, 7, z_n);cout << z_n << '\n'; }
    return 0;
}