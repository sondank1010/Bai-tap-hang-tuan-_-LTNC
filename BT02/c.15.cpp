#include <iostream>
using namespace std;
int F(int n){
    if(n == 0 ){
        return 0;
    }else if(n == 1) return 1;
    return F(n- 2) + F( n - 1); // su dung de quy
}
bool checkFibo(int m){
     for(int i=0;i<=m;i++)
       if(F(i)== m) return 1;
    return 0;
}
int pos(int n){
    int cnt = 0;
    if(checkFibo(n) == true){
    for(int i = 0; i <= n; i++){
        if(checkFibo(i) == true) cnt++;
        }
        return cnt;
    }
    return -1;
}
int main(){
    int n;
    cin >> n;
    if(checkFibo(n) == true) {
    cout << " yes" << endl;
//    cout << pos(n);
    for(int i = 0; i <= n; i++){
            if(checkFibo(i) == 1){
                cout << i << ' ';
            }
        }
    }
    else cout << "no";

    return 0;


}

