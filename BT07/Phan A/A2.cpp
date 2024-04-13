#include <iostream>
using namespace std;
void printSize(int a[]){
    cout << sizeof(*a) << endl;
}
int main(){
    int a[]={1,2,3,4,5};
    int b[3] = {1,2,3};
    cout<<sizeof(a)<<endl;  //kich thuoc mang 
    printSize(a);         // kich thupc ptu dau tien  
    cout<<sizeof(b)<<endl;  
    printSize(b);           
}