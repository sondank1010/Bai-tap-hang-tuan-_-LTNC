#include <iostream>
using namespace std;
struct Point{
    int x, y;
    Point (int _x, int _y){
        x = _x;
        y = _y;
    }
};

void print(Point p) {
    cout << p.x << ' ' << p.y;
}

int main(){
    int x = 3, y = 5;
    Point p(x, y);
    cout << &(p.x) << " " << &(p.y) << " " << &p;
    return 0;
}

Dia chi cua p.x va p la giong nhau. Ca hai deu tro den dia chi bat dau cua p.