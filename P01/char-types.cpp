#include <iostream>

using namespace std;

int main(){
    int n;
    char c;
    int countletters = 0;
    int countdigits = 0;
    int countnot = 0;
    cin >> n;
    for(int i=0; i < n; i++){
        cin >> c;
        if(c >= '0' && c <= '9'){
            countdigits++;
        } else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            countletters++;
        } else{
            countnot++;
        }
    }
    cout << countletters << " " << countdigits << " " << countnot << "\n";
    return 0;
}