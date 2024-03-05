#include <iostream>
using namespace std;
struct cords{
    double x, y;

};
cords midPoint(cords a, cords b){
    cords mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

cords print(cords a){
    cout <<"(" << a.x << "," << a.y <<")";
}
int main(){
    double x, y;
    cin >> x >> y;
    double z, t;
    cin >> z >> t;
    cords a{x, y};
    cords b{z, t};
    cords mid = midPoint(a, b);
    cout <<"Mid: " << "(" << mid.x << "," << mid.y <<")";
    return 0;


}
