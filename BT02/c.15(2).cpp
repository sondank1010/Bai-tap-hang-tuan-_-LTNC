#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    int f0 = 0;
    int f1 = 1;
    int fn;
    for(int i = 2; i <= n; i++){
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}
bool checkFibo(int m){
     for(int i=0;i<=m;i++)
       if(fibo(i)== m ) return 1;
    return 0;
}


int main(){
    int n;
    cin >> n;
    if(checkFibo(n) == true) {
    cout << " yes" << endl;

    for(int i = 0; i <= n; i++){
            if(checkFibo(i) == 1){
                cout << i << ' ';
            }
        }
    }
    else cout << "no";

    return 0;


}
