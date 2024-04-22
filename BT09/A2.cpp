#include <iostream>


using namespace std;
int main(){
     int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p; // xoa con tro p
*p2 = 100;// truy cap vao vung da bi xoa -> loi
 cout << *p2;// Loi
 delete p2;

}