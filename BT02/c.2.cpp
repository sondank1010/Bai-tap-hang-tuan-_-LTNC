#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int h;
    cin >> h;
    for(int i = 1; i <= h; i++){
        for(int j =1 ; j < i; j++){
           cout <<" ";
    }
    for(int k = h - i + 1; k >= 1;k --){
        cout << "*";
    }

    cout << endl;

}
}
