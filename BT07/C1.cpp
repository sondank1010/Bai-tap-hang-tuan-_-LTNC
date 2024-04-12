#include <iostream>
using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; ++i) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

int main() {
   char s[100];
   cin.getline(s, 100);
   reverse(s);
   cout << s;

    return 0;
}
