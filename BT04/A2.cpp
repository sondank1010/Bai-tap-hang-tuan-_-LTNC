#include <iostream>
#include <cstring>

using namespace std;
char a1[5];
// char b1[3] = "abcd";
// char b1[4] = "abcd";
char b1[5] = "abcd";
int main(){
    // char a2[5];

    // cout << a1 << endl;
    // for(int i = 0; i < 5; i++){
    //     cout << a1[i];
    // }
    // cout << "\n";

    // cout << a2 << endl;
    // for(int i = 0; i < 5; i++){
    //     cout << a2[i];
    // }

    // char b2[3] = "abcd";
    // char b2[4] = "abcd";
    char b2[5] = "abcd";

    cout << b1 << endl;
    for(int i = 0; i < 5; i++){
        cout << b1[i];
    }
    cout << endl;

    cout << b2 << endl;
    for(int i = 0; i < 5; i++){
        cout << b2[i] ;
    }
    cout << endl;

    cout << sizeof(b2) / sizeof(b2[1]);


    
    return 0;

}