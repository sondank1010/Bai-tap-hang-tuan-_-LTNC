#include <iostream>
using namespace std;
int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void truncate(char a[], int n){
    if(strlen(a) <= n){
        cout << a;
    }
    else{
        a[n] = '\0';
        cout << a;
    }
}
int main(){
    char s[100];
    cin.getline(s, 100);
    int n;
    cin >> n;
    truncate(s, n);
    return 0;
}