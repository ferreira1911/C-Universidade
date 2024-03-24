#include <iostream>
#include "complex.h"
#include <cmath>

using namespace std;

void add(const complex& a, const complex& b, complex& r){
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r){
    r.x = a.x*b.x - a.y*b.y;
    r.y = a.x*b.y + b.x*a.y;
}

double norm(const complex& c){
    double resultado=0;
    resultado = sqrt(c.x * c.x + c.y * c.y);
    return resultado;
}

int main(){
    { complex a { 1.2, 3.4 }, b { -1.2, 2.3}, s, m;
  add(a, b, s); 
  mul(a, b, m);
  cout << s << ' ' << m << ' ' << norm(s) << ' ' << norm(m) << '\n'; }   
    return 0;
}