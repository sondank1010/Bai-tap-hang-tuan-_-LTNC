#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int * p = new int ;
    p = &n;
    int *c = p;
    cout << n << endl;
    cout << *p << endl;
    delete p;
    cerr << c;

}