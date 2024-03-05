#include <iostream>
using namespace std;
struct cords{
    int x, y;

};

cords print(cords a){
    cout <<"(" << a.x << "," << a.y <<")";
}
int main(){
    cords a{4, 5};
    print(a);
    return 0;
}
