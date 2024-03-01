#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool leap(int x){
    if( x % 4 == 0  || ( x & 100 ==0  && x % 400 == 0 )){


        return 1;
    }
    else return 0;
}
int main(){
    int x;
    cin >> x;
    if(leap(x) == true) {
        cout << "true";
    }
    else cout << "false";
    return 0;
}
