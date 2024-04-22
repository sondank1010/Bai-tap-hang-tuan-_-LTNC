#include <iostream>
#include <cstring>
using namespace std;

int Strlen(const char* a){
    int res = 0;
    for (int i = 0; a[i] != '\0'; i++){
        res++;
    }
    return res;
}

char* reverse(const char* a) {
    int length = Strlen(a);
    char* s = new char[length + 1];
    int j = 0;
    for (int i = length - 1; i >= 0; i--) {
        s[j++] = a[i];
    }
    s[length] = '\0';
    return s;

    
}
char* delete_char(const char* a, char c) {
    int len = Strlen(a);
    char* s = new char[len + 1];
    int j = 0;
    for (int i = 0; i < len; i++){
        if (a[i] != c){
            s[j++] = a[i];
        }
    }
    s[j] = '\0';
    return s;

}
char * pad_right( const char a[], int n){
    int l = strlen(a);
    char *s = new char[l + 1];
   for(int i = 0; i < l; i++){
    s[i] = a[i];
   }
    if(strlen(a) >= n){
        return s;

    }
    else{
        for(int i = l; i < n ; i++){
            *(s + i ) ='_';

        }
        s[n] = '\0';
    }
    return s;
}
char* pad_left(char a[], int n) {
    int l = strlen(a);
    char *s = new char[l + 1];
   for(int i = 0; i < l; i++){
    s[i] = a[i];
   }
    if (l >= n) {
        return s;
    } else {
        for (int i = l; i < n; i++) {
            for (int j = l; j >= 0; j--) {
                s[j + 1] = s[j];
            }
        }
        for(int i = 0; i < n - l ; i++){
            s[i] = '_';
        }
       return s;
    }
}
char* truncate(const char* a, int n){
    int length = Strlen(a);
    char* s = new char[n + 1];
    for (int i = 0; i < n; i++){
        s[i] = a[i];
    }
    s[n] = '\0';
    return s;
}

char* trim_left(const char* a){
    int length = Strlen(a);
    char* s = new char[length + 1];
    bool isCharacter = false;
    int j = 0;
    for(int i = 0; i < length; i++){
        if (a[i] != ' '){
            isCharacter = true;
        }
        if (isCharacter){
            s[j++] = a[i];
        }
    }
    s[j] = '\0';
    return s;
}
char* trim_right(const char* a){
    int length = Strlen(a);
    char* s = new char[length + 1];
    int end = 0;
    for(int i = length - 1; i >= 0; i--){
        if (a[i] != ' '){
            end = i;
            break;
        }
    }
    for (int i = 0; i <= end; i++){
        s[i] = a[i];
    }
    s[end + 1] = '\0';
    return s;
}


int main(){
    char s[] = "Hello World";
    char c[] = "abc";
    // cout << reverse(s);
    // cout << delete_char(s, 'o');
    // cout <<pad_right(c, 5);
    // cout << pad_left(c, 5);
    // cout << truncate(c, 2);
    cout << trim_left(s);


}