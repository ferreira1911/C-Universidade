#include <iostream>
#include <cmath>

using namespace std;


unsigned long numbin(int num){
    unsigned long result=0;
    int cont = 0;
    int aux = 1;
    while(num != 0){
        if(num > aux){
            aux = aux * 2;
            cont++;
        }else{
            if(num == aux){
                num = num - aux;
            }else{
                num = num - aux / 2;
            }
            if(cont==0){
                result = result + 1;
            }else{
                result = result + 1 * (pow(10,cont-1));
            }
            aux = 1;
            cont = 0;
        }
    }
    return result;
}
int numde1sdebinario(int numbina){
    int numde1s = 0;
    while (numbina != 0){
        if(numbina % 10 == 1){
            numde1s++;
        }
        numbina = numbina / 10;
    }
    return numde1s;
}

int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    for(int i = a; i <= b; i++){
        int cont = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            int numbinario = numbin(i);
            int numde1s = numde1sdebinario(numbinario);
            int cont1 = 0;
            for(int k=1; k <= numde1s ; k++){
                if(numde1s % k == 0){
                    cont1++;
                }
            }
            if(cont1==2){
                cout << i << " ";
            }
        }
    }
    return 0;
}