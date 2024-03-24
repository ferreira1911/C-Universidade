#ifndef __interval_h__
#define __interval_h__

struct time_of_day {
  unsigned char h; // Hours [0,23]
  unsigned char m; // Minutes [0,59]
};

struct interval {
  time_of_day start; // Start time
  time_of_day end;   // End time
};

#include <iostream>
using namespace std;

ostream& operator<<(ostream& out, time_of_day t) {
  if (t.h < 10) out << '0';
  out << (int) t.h << ':';
  if (t.m < 10) out << '0';
  out << (int) t.m;
  return out;
}

ostream& operator<<(ostream& out, interval il) {
  return out << '[' << il.start << ',' << il.end << '[';
}

#endif // __interval_h__

/* Se o dia1 for maior(mais tarde) vai retornar true */
bool maior(time_of_day dia1, time_of_day dia2){
    bool verifica = false;
    if(dia1.h > dia2.h){
        verifica = true;
    }else if(dia2.h > dia1.h){
        verifica = false;
    }else{
        if(dia1.m > dia2.m){
            verifica = true;
        }else if(dia2.m > dia1.m){
            verifica = false;
        }else{
            verifica = false;
        }
    }
    return verifica;
} 

interval intersection(interval a, interval b){
    interval result {{0,0},{0,0}};
    if( !maior(a.end,b.start) || maior(a.start,b.end)){
        return result = {{0,0},{0,0}};
    }else{
        if( (a.start.h == b.end.h && a.start.m == b.end.m) || (a.end.h == b.start.h && a.end.m == b.start.m)){
            return result = {{0,0},{0,0}};
        }else{
            if(maior(a.start,b.start)){
                result.start = a.start;
            }else{
                result.start = b.start;
            }
            if(maior(a.end,b.end)){
                result.end = b.end;
            }else{
                result.end = a.end;
            }
            
        }
    }
    return result;
} 

int main(){
    cout << intersection( { { 12, 30 }, { 14, 30 } },{ { 17, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 12, 30 }, { 14, 30 } },{ { 14, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 12, 30 }, { 14, 31 } },{ { 14, 30 }, { 18, 30 } } ) << '\n';
    cout << intersection( { { 14, 30 }, { 15, 59 } },{ { 11, 30 }, { 14, 31 } } ) << '\n';
    cout << intersection( { {  4, 30 }, {  7, 59 } },{ {  4,  0 }, {  7, 29 } } ) << '\n';
    cout << intersection( { { 23,  0 }, { 23, 58 } },{ { 22, 45 }, { 23, 59 } } ) << '\n';
    cout << intersection( { { 17,  0 }, { 19,  0 } },{ { 15,  0 }, { 17,  0 } } ) << '\n';
    return 0;
}







