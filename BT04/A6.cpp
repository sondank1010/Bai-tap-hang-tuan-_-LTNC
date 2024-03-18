#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int n = 30;
    int a[n];
    srand(time(NULL));
    for(int i =0 ; i < 30; i++){
        a[i] = rand() % 100 + 1;
        cout << a[i] << " ";
    }

    for (int k = n - 1; k > 0; k--)
   for (int i = 1; i <= k; i++)
      if (a[i-1] > a[i]) {
         int temp = a[i]; 
         a[i] = a[i-1]; 
         a[i-1] =  temp;
      }



    // for(int i = n - 1; i > 0; i-- ){
    //     bool swapped = false;
    //     for(int j = 1; j <= i; j++){
    //         if(a[i - 1] < a[i]){
    //             int temp = a[i]; 
    //             a[i] = a[i-1]; 
    //             a[i-1] =  temp;

    //             swapped = true;
    //         }
    //     }
    //     if(!swapped) break;
    // }
    
    cout << endl;
    for(int i = 0; i < 30; i++){
        cout << a[i] <<" ";
    }
    return 0;
}