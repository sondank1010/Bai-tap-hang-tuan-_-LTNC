#include <iostream>
#include <cstring>
using namespace std;
bool palin(int n){
    string s = to_string(n);
    int len = s.length();
    for(int i = 0 ; i < len / 2 ; i++){
        if(s[i] != s[len - 1 - i] ){
            return false;
        }
    }
    return true;
}
int countMirrorNumbers(int A, int B) {
    int count = 0;
    for (int num = A; num <= B; ++num) {
        if (palin(num)) {
            count++;
        }
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t ; ++i){
        int a, b;
        cin >> a >> b;
        cout << countMirrorNumbers(a, b) << endl;
    }
        return 0;
    }
