#include <iostream>
using namespace std;
struct Rect{
    double x, y;
    double w, h;
};
struct Ship{
    Rect info;
    string id;
    double dx, dy;
    Rect move(){

        info.x += dx;
         info.y += dy;
        return info;
    }
};
void display(const Ship& ship){
    cout <<"(" << ship.info.x <<","<< ship.info.y << ")" << endl;
    cout << ship.id;
    }
int main(){
    double w, h;
    cout <<"Nhap vao kich thuoc tau: ";
    cin >> w >> h;

    double x, y;
    cout << "Nhap vao vi tri:";
    cin >> x >> y;

    string id;
    cout << "Nhap vao ma tau: ";
    cin >> id;

    double vx, vy;
    cout << "Nhap vao van toc: ";
    cin >> vx >> vy;
    Ship s;
    s.info.h = h;
    s.info.w = w;
    s.info.x = x; s.info.y = y;
    s.id = id;
    s.dx = vx;
    s.dy = vy;
    s.move();
    display (s);
    int loop = 0;
    while (loop < 10) {

		s.move();
		display(s);
		loop++;
	}



}
