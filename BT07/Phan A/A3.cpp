#include <iostream>
using namespace std;

int count_even(int* a, int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    cout << count_even(a, 5) << endl;
    cout << count_even(a + 4, 5);
}