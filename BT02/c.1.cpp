#include <iostream>
#include <cmath>
using namespace std;
bool snt(int n){
    for(int i = 2; i <= sqrt(n);i ++){
        if(n % i == 0) return 0;
    }
    return n > 0;
}
int main(){
    int n;
    cin >> n;
    if(snt(n) == 1){
        cout << "La so nguyen to";
    }
    else cout << "Khong phai so nguyen to";
    return 0;
}
