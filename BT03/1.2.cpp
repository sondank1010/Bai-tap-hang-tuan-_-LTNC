#include <iostream>
using namespace std;
struct cords{
    int x, y;

};
void change1(cords a){
    a.x = 5;
    a.y = 7;

}
void change2(cords &a){
    a.x = 5;
    a.y = 7;
}
cords print(cords a){
    cout <<"(" << a.x << "," << a.y <<")";
}
int main(){
    cords a{4, 5};
    print(a); cout << endl;
    change1(a);
    cout << "Tham tri:";
    print(a); cout << endl;
    change2(a);
    cout <<"Tham bien:";
    print(a);

    return 0;
}
