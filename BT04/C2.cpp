#include <iostream>
#include <cstring>
using namespace std;

bool checkSyme(char a[]){
    for(int i = 0; i < strlen(a) / 2; i++){
        if(a[i] != a[strlen(a) - 1 - i] ){
            return false;
        }
    }
    return true;
}
int main(){
    char a[100];
    cin >> a;
    if(checkSyme(a) == 1) cout << "Doi xung";
    else cout << "Khong Doi xung";
    return 0;

}