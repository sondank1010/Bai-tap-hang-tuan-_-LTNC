#include <iostream>
using namespace std;

int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void pad_left(char a[], int n) {
    int l = strlen(a);
    if (l >= n) {
        cout << a;
    } else {
        for (int i = l; i < n; i++) {
            for (int j = l; j >= 0; j--) {
                a[j + 1] = a[j];
            }
            a[0] = '_';
        }
        a[n] = '\0';
        cout << a;
    }
}

int main() {
    char s[100];
    cin.getline(s, 100);
    int n;
    cin >> n;
    pad_left(s, n);
    return 0;
}
