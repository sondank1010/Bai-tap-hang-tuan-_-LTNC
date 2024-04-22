#include <iostream>
using namespace std;
struct Point{
    int x, y;
    Point (int _x, int _y){
        x = _x;
        y = _y;
    }
};

void print1(Point p) {
    cout << &p;
}

void print2(Point &p){
        cout << &p;
}

int main(){
    int x = 3, y = 5;
    Point p(x, y);
    cout << &p << endl;
    print1(p); // Dia chi khac
    cout  << endl;
    print2(p);
    return 0;
}

