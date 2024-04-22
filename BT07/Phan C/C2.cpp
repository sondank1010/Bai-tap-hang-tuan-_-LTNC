#include <iostream>
using namespace std;

int Strlen(const char* s) {
    int l = 0;
    while (s[l] != '\0') {
        l++;
    }
    return l;
}

void delete_char(char a[], char c) {
    int length = Strlen(a);
    int j;
    for (int i = 0; i < length; i++) {
        while (*(a + i) == c) {
            for (j = i; j < length - 1; j++) {
               *(a+j) = *(a+ j + 1);
            }
            *(a + j) = '\0';
            length--; 
            
        }
    }
}

int main() {
    char s[100];
    cin.getline(s, 100);
    char c;
    cin >> c;
    delete_char(s, c);
    cout << s;
    return 0;
}
