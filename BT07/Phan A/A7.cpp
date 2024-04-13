#include <iostream>
#include <cstring>

using namespace std;

int count(const char * c1, const char* c2){
    int len1 = strlen(c1);
    int len2 = strlen(c2);
    int count = 0;
    
    for (int i = 0; i < len2 - len1 + 1; i++) {
    char * tmp = new char[len1 + 1];
    strncpy(tmp, c2 + i, len1 );
    tmp[len1] = '\0';
    int r = strcmp(tmp, c1);
    if(r == 0) count++;
    delete[] tmp;
    }
    
    return count;

}
int main(){
    char s[100];
    char k[1000];
    cin.getline(s,100);
    cin.getline(k,1000);
    cout << count(s, k);
    return 0;

}