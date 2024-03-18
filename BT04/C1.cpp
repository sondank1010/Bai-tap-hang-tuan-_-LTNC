#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool check(const int a[], int n)
{
    bool flag = false;
    for(int i = 0; i < n - 1; i++){
        
        for(int j = i + 1; j < n; j++){
           if(a[i] == a[j]){
                flag = true;
                return flag;s
            }
        }
    }
    return flag;
}
int main(){
   
    int n;
    do{
        cout << "Type in N :";
        cin >> n;
        
        if(n > 10000) cout << "INVALID, please try again" <<'\n';
    }while(n > 10000);
    
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bool c = check(a, n);
    if(c == 1) cout << "ton tai phan tu trung nhau";
    else{
        cout << "khong ton tai phan tu nao trung nhau";
    }

    
    

    return 0;
}   