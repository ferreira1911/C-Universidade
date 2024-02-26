#include <iostream>

using namespace std;

bool is_leap_year(int y){
    if(y % 4 == 0){
        if((y % 100 == 0) and (y % 400 != 0)){
            return false;
        }else{
            return true;
        }
    }else{
        return false;
    }
}

int last_day(int m,int y){
    int d = 0;
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            d = 31;break;
        case 4: case 6: case 9: case 11:
            d = 30;break;
        case 2:
            if(is_leap_year(y)){
                d = 29;break;
            }else{
                d = 28;break;
            }
    }
    return d;
}

void advance(int delta, int& d, int& m, int& y){
    while(delta > 0){
        d++;
        delta--;
        if(d > last_day(m,y)){
            d -= last_day(m,y);
            m++;
            if(m > 12){
                m=1;
                y++;
            }
        }
    }
}
