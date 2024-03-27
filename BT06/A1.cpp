#include <iostream>
using namespace std;

int main() {
    int a[3] = { 1, 2, 3};
    char b[3] = "ab";

    for (int i = 0; i < 3; i++) {
        cout << &a[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << (void*)&b[i] << ' ';
    }
    cout << endl;


    a[0] = 1;
    a[1] = 2;
    a[2] = 3;


    b[0] = 'a';
    b[1] = 'b';
    b[2] = '\0';

    for (int i = 0; i < 3; i++) {
        cout << &a[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < 3; i++) {
        cout << (void*)&b[i] << ' ';
    }
    cout << endl;

    return 0;
}
//cac bien khai bao truoc va sau o nhung vi tri giong nhau
