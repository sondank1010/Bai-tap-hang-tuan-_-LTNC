#include <bits/stdc++.h>
using namespace std;
struct Point{
    int x, y;
};
struct Rect{
    Point corner;
    double w, h;
    bool contains(const Point &p){
        if((corner.x < p.x && p.x < corner.x + w) && (corner.y < p.y && p.y < corner.y+h)){
            return 1;
        }
        else return 0;
    }
};
int main(){
    int x, y;
    cout << "Nhap goc hinh chu nhat:";
    cin >> x >> y;
    int z, t;
    cout << "Nhap diem: ";
    cin >> z >> t;
    int w, h;
    cout << " Nhap chieu dai va chieu cao:";
    cin >> w >> h;
    Point goc{x, y}, diem{z, t};
    Rect cn{goc, w, h};
    if(cn.contains(diem) == 1){
        cout << "Diem nam trong hinh chu nhat";
    }
    else cout << "Diem nam ngoai hinh chu nhat";
    return 0;
}

