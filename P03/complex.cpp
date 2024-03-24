#ifndef __complex_h__
#define __complex_h__

#include <cmath>

// Representation of a complex number z = x + y i
struct complex {
  double x; // Real part
  double y; // Imaginary part
};

void add(const complex& a, const complex& b, complex& r){
    r.x = (a.x + b.x);
    r.y = (a.y + b.y);
}
void mul(const complex& a, const complex& b, complex& r){
    r.x = (a.x*b.x - a.y*b.y);
    r.y = (a.x*b.y + b.x*a.y);
}
double norm(const complex& c){
    double a = sqrt(c.x*c.x + c.y*c.y);
    return a;
}

#include <iostream>
#include <iomanip>
using namespace std;

ostream& operator<<(ostream& out, const complex& c) {
  return out << fixed << setprecision(3) << c.x << (c.y >= 0.0 ? "+" : "")<< c.y << "i";
}

#endif // __complex_h__

int main(){
    { complex a { 0, 1 }, b { 2, 1}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    { complex a { 1.2, 3.4 }, b { -1.2, 2.3}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    { complex a { -1.5, 1 }, b { -1, 2}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    { complex a { -2, 2 }, b { 2, -2}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    { complex a { 0, 0 }, b { 1.2, -3.4}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    { complex a { 2, 0 }, b { 2.5, -3.1}, s, m;add(a, b, s); mul(a, b, m);cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }
    return 0;
}