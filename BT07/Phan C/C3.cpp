#include <iostream>
using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void pad_right(char a[], int n){
    int l = strlen(a);
    if(strlen(a) >= n){
        cout << a;

    }
    else{
        for(int i = l; i < n ; i++){
            *(a + i ) ='_';

        }
        a[n] = '\0';
    }
    cout << a;
}
int main(){
    char s[100];
    cin.getline(s, 100);
    int n;
    cin >> n;
    pad_right(s, n);
    return 0;
}