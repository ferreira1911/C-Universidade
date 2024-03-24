#include <iostream>

using namespace std;


int main(){
    int num;
    int contdigitos = 0;
    int contletras = 0;
    int contespeciais = 0;
    cin >> num;
    for(int i = 0; i < num; i++){
        char character;
        cin >> character;
        if(character >= '0' && character <= '9'){
            contdigitos++;
        }else if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
            contletras++;
        }else{
            contespeciais++;
        }
    }
    cout << contletras << " " << contdigitos << " " << contespeciais ;
    return 0;
}