#include <iostream>
#include <math.h>

using namespace std;

unsigned long hstr_to_integer(const char hstr[]){
    int cont = 0;
    unsigned long result = 0;
    while(hstr[cont] != '\0'){
        cont++;
    }
    int contnovo = cont;
    cont--;
    for(int i=0; i <= (contnovo-1) ; i++){
        if(int(hstr[i] - '0') >= 0 && int(hstr[i] - '0') <= 9){
            result = result + ((hstr[i] - '0') * (pow(16,cont)));
        }else{
            if(hstr[i] == 'A' || hstr[i] == 'a'){
                result = result + 10 * (pow(16,cont));
            }
            else if(hstr[i] == 'B' || hstr[i] == 'b'){
                result = result + 11 * (pow(16,cont));
            }
            else if(hstr[i] == 'C' || hstr[i] == 'c'){
                result = result + 12 * (pow(16,cont));
            }
            else if(hstr[i] == 'D' || hstr[i] == 'd'){
                result = result + 13 * (pow(16,cont));
            }
            else if(hstr[i] == 'E' || hstr[i] == 'e'){
                result = result + 14 * (pow(16,cont));
            }
            else if(hstr[i] == 'F' || hstr[i] == 'f'){
                result = result + 15 * (pow(16,cont));
            }
        }
        cont--;
    }
    return result;
}


int main(){
    cout << hstr_to_integer("123456789999999");
    return 0;
}