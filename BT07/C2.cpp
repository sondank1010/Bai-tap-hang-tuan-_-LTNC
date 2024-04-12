#include <iostream>
using namespace std;
int strlen(const char * s){
    int l = 0;
    while(s[l] != '\0'){
        l++;
    }
    return l;
}

void delete_char(char a[], char c){
    int count;
        int length = strlen(a);
        for(int i = 0; i < length; i++ ){
            while(a[i] == c){
                for(int j = i + 1; j < length - 1; j++){
                     a[i] = a[i + 1];
                     count++;
                }
            }
        }
    a[length  - count ] = '\0';
}
int main(){
    char s[100];
    cin.getline(s, 100);
    char c;
    cin >>c;
    delete_char(s, c);
    cout << s;
}