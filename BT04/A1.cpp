#include <iostream>
using namespace std;
int a1[7];
int a2[4] = {1, 2, 3, 4};
int main(){
    int b1[7];
    int b2[4] = {1, 2, 3, 4} ;
    for(int i = 0; i < 4; i++){
        cout << a1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        cout << b1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        cout << a2[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        cout << b2[i] <<" ";
    }
    return 0;
}

// ngoài main thì giá trị = 0, trong main thì ra giá trị rác

