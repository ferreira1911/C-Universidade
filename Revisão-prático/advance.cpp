#include <iostream>

using namespace std;

int diasdomes(int mes, int ano){
    int dias = 0;
    switch (mes)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        dias = 31;
        break;
    case 4: case 6: case 9: case 11:
        dias = 30;
        break;
    case 2:
        dias = 28;
        break;
    }
    if(dias == 28){
        if(ano % 4 == 0){
            if(ano % 100 == 0 && ano % 400 != 0){
                dias = 28;
            }else{
                dias = 29;
            }
        }
    }
    return dias;
}


void advance(int delta, int& d, int& m, int& y){
    int diasdomesatual = diasdomes(m,y);
    while (delta != 0){
        d++;
        delta--;
        if(d > diasdomesatual){
            m++;
            if( m > 12){
                m = 1;
                y++;
            }
            d = 1;
        }
        diasdomesatual = diasdomes(m,y);
    }
    
}
int main(){
    { int d = 1, m = 1, y = 2022; 
  advance(0, d, m, y); 
  cout << d << ' ' << m << ' ' << y; }
    return 0;
}