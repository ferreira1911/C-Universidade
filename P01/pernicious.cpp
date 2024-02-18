// vais fazer e verificar se e menor e multiplicando por dois depois se for maior divides ou igual

#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    for(int i=a; i<=b; i++){
        int count = 0;
        for(int j=1; j<=i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            int number = i;
            int k=1;
            int countnumbers1 = 0;
            while(number != 0){
                if(number == 1){
                    countnumbers1++;
                    number = number - 1;
                }else if((2*k) == number){
                    countnumbers1++;
                    number = number - 2*k;
                }else if((2*k) > number){
                    countnumbers1++;
                    number = number - 2*(k/2);
                    k=1;
                }else{
                    k=k*2;
                }
            }
            count = 0;
            for(int j=1; j<=countnumbers1; j++){
                if(countnumbers1 % j == 0){
                    count++;
                }
            }
            if(count == 2){
                cout << i << " ";
            }
        }
    }
    return 0;
}