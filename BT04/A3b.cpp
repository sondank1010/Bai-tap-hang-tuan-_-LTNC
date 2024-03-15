#include <iostream>
using namespace std;
int main(){
    int daytab1[2][12] = {
  {28,31,31,30,31,31,31,30,31},
  {31,29,31,31,31,31,30,31}
    };
    int daytab2[2][12] = {
  31,28,31,31,30,31,30,31,30,31,
  29,31,30,31,31,31,31,30
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << daytab1[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << daytab2[i][j] << " ";
        }
        cout << endl;
    }
     return 0;

     
}
