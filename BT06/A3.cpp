#include <iostream>
using namespace std;
int thaydoithamtri(int a){
    cout << &a << endl;
    a = 100;
    return a;
}
int thaydoithamchieu(int &a){
    cout << &a << endl;
    a = 100;
    return a;
}


int main(){
    int a = 50;
    cout << &a << endl;
    thaydoithamtri(a); //dia chi khac a
    cout << a << " " << endl;
    thaydoithamchieu(a); // dia chi giong a
        cout << a<<" " ;
    }
   

