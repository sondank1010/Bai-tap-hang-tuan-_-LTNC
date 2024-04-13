#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int * a, int size, int t){
    int low = 0; int high = size - 1;
    while(high >= low){
    int k =(low + high) / 2;
    if(*(a + k) == t) return 1;
    if(t < *(a + k)) high = k - 1;
    else low = k + 1;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; ++i) cin >> a[i];
    sort(a, a + n);
    int x;
    cin >> x;
    if(binary_search(a, n, x)  == true){
        cout << "Yes";
    }
    else cout << "No";

}