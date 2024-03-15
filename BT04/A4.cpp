#include <iostream>
using namespace std;
int main(){
    char a[5] = "abcd";
    // Doc, ghi tran
     
    a[-1] = 'e';
    cout << a[-1] << endl;
    a[5] = 'e';
    cout << a[5] << endl;
    a[6] = 'e';
    cout << a[6] << endl;
    cout << a;

    //tran mang nhieu chieu
    char b[3][4] = {
        {"abcd"},
        {"ab"},
        {"ab"},
        

    };
   for(int i = 0; i < 3; i++)
   {
    for(int j = 0; j < 3; j++)
    {
        cout << b[i][j] << " ";
    }
    cout << endl;
   };
    return 0;
}