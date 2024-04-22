#include <iostream>
#include <cstring>

using namespace std;


char * concat(const char * s, const char * d){
    int lens = strlen(s);
    int lend = strlen(d);
    char * temp = new char[lens + lend];
    strcpy(temp, s);
    strcat(temp, d);
    return temp;
}
int main(){
    char  s[] = "Hello";
    char  d[] = "World";
    cout << concat(s, d);
    return 0;

}