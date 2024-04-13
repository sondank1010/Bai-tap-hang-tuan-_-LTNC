#include <iostream>
using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
bool is_palindrome(char a[]){
    int len = strlen(a);
    for(int i = 0; i <= len / 2; i++){
        if(a[i] != a[ len-i - 1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[100];
    cin.getline(s, 100);
    if(is_palindrome(s) == 1){
        cout << "true";
    }
else cout << "false";
}
