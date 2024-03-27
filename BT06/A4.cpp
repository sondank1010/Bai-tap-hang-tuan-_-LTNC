#include <iostream>
#include <string>
using namespace std;
string thaydoistring1(string s){
    s= "Hello";
    return s;
}
string thaydoistring2(string &s){
    s= "Hello";
    return s;
}
void change(int arr[], int size){
    arr[0] = 100;

}
int main(){
    string s = "Hi";
    thaydoistring1(s);
    cout << s;
    cout << endl;
    thaydoistring2(s);
    cout << s << endl;
     int myArray[] = {1, 2, 3, 4, 5};
    cout << "Mang truoc khi goi ham: " << myArray[0] << endl;// pass by reference
    change(myArray, 5);
    cout << "Mang sau khi goi ham: " << myArray[0] << endl;
    return 0; // string  = pass by value;
}