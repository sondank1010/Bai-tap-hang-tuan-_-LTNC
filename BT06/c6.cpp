#include <iostream>
using namespace std;
#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int a, int b){
    a = abs(a);
    b= abs(b);
    int min;
    // if(a < b && b % a == 0) return a;
    // else if(b < a && a % b ==0) return b;
     if(a < b) min = a;
     if(b < a)min = b;
    for(int i = min; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << UCLN(a, b);
    return 0;
} 