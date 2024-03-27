#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int &ref_a = a; 

    cout << "Gia tri cua a: " << a << endl;
    cout << "Gia tri cua ref_a: " << ref_a << endl;
    cout << "Dia chi cua a: " << &a << endl;
    cout << "Dia chi cua ref_a: " << &ref_a << endl;
    //ref a va a cung 1 dia chi - > la 1 bien;
    //khong the khai bao refa khi chua co a
    int b = 100;
    int &ref_a = b;
    cout << ref_a;/ khong the khai bao bien tham chieu bi trung
}
