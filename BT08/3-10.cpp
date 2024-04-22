#include <iostream>
#include <cstring>
using namespace std;
struct String{
   int n;
   char *str;
    
    String(const char * s){
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    ~String(){
        delete[] str;
    }

    void print(){
        cout << str;
    }

    void append(const char*s){
        int len = strlen(s);
        char*temp = new char[n + len + 1];
        strcpy(temp, str);
        strcat(temp, s);
        delete[] str;
        str = temp;
        n+= len;
    }
};

int main(){
String greeting("Hi");
    greeting.append(" there");
    greeting.print(); 

    return 0;
}