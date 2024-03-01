#include <iostream>
using namespace std;
int main(){
    int h;
    cin >> h;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= 2*h - 1; j += 1){
           if((j >= h -i + 1 && j <= h + i - 1)){
            cout <<"*";
           }
           else cout <<" ";
        }
        cout << endl;
    }
}
