#include <iostream>
using namespace std;


int strlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void trim_left(char a[]) {
    int len = strlen(a);
    int start = 0;

 
    while (a[start] == ' ') {
        start++;
    }


    for (int i = 0; i < len - start; i++) {
        a[i] = a[i + start];
    }

  
    a[len - start] = '\0';
}

int main() {
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);

    trim_left(s);

    cout << "Trimmed string: " << s << endl;

    return 0;
}
