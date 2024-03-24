#include <iostream>
#include "fraction.h"

using namespace std;

int maximodivisor(int num1, int num2){
    if(num2 == 0){
        return num1;
    }else{
        return maximodivisor(num2,num1%num2);
    }
}

fraction add(fraction a, fraction b){
    fraction resultado;
    int aux;
    if(a.den == b.den){
        resultado.num = a.num + b.num;
        resultado.den = a.den;
    }else{
        resultado.den = a.den * b.den;
        resultado.num = (a.num * b.den) + (a.den * b.num);
    }
    aux = maximodivisor(resultado.num,resultado.den);
    resultado.num = resultado.num / aux;
    resultado.den = resultado.den / aux;
    if(resultado.den < 0){
        resultado.num = resultado.num * -1;
        resultado.den = resultado.den * -1;
    }
    return resultado;
}

fraction mul(fraction a, fraction b){
    fraction resultado;
    int aux;
    resultado.num = a.num * b.num;
    resultado.den = a.den * b.den;
    aux = maximodivisor(resultado.num,resultado.den);
    resultado.num = resultado.num / aux;
    resultado.den = resultado.den / aux;
    if(resultado.den < 0){
        resultado.num = resultado.num * -1;
        resultado.den = resultado.den * -1;
    }
    return resultado;
}

int main(){
cout << add({7,4536}, mul({-5,21}, add({1,2}, mul({-2,3}, {1,9})))) << '\n';


    return 0;
}