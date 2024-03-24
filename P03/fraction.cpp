#ifndef __fraction_h__
#define __fraction_h__
#include <iostream>  

using namespace std;

struct fraction {
   int num; // Numerator
   int den; // Denominator
};

int gcd(int a, int b){
    if(b == 0){
        return a;
    }else{
        return gcd(b,a%b);
    }

}

fraction add(fraction a, fraction b){
    fraction result;
    if(a.den != b.den){
        result.den = a.den * b.den;
        a.num *= b.den;
        b.num *= a.den;
        result.num = a.num + b.num;
        int div = gcd(result.num,result.den);
        result.num = result.num / div;
        result.den = result.den / div;
    }else if(a.num*-1 == b.num){
        return result = {0,1};
    }
    else{
        result.den = a.den;
        result.num = a.num + b.num;
    }
    if(result.den < 0){
        result.den = result.den*-1;
        result.num = result.num*-1;
    }
    return result;
}

fraction mul(fraction a, fraction b){
    fraction result;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    int div = gcd(result.num,result.den);
    result.num = result.num / div;  
    result.den = result.den / div;
    if(result.den < 0){
        result.den = result.den*-1;
        result.num = result.num*-1;
    }
    return result;
}

ostream& operator<<(ostream& out, fraction f) {
  if (f.den == 1) 
    out << f.num;
  else
    out << f.num << '/' << f.den;
  return out;
}

#endif // __fraction_h__







int main(){
    { fraction a { 0, 1 }, b { 2, 1};cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    { fraction a { 1, 1 }, b { -1, 2};cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    { fraction a { -3, 2 }, b { 3, 2 };cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    { fraction a { -3, 2 }, b { -2, 3 };cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    { fraction a { -7, 24 }, b { 1, 3 };cout << add(a,b) << ' ' << mul(a,b) << '\n'; }
    { fraction a { -8, 25 }, b { 3, 4 };cout << add(a,b) << ' ' << mul(a,b) << '\n'; } 
    cout << add({7,4536}, mul({-5,21}, add({1,2}, mul({-2,3}, {1,9})))) << '\n';   
    return 0;
}