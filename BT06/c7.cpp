#include <iostream>

using namespace std;


void printSpacesAndStars(int M, int N) {

    for (int i = 0; i < M; ++i) {
        cout << " ";
    }


    for (int i = 0; i < N; ++i) {
        cout << "*";
    }

    cout << endl; 
}

int main() {
    int numOfLines;
   
    cin >> numOfLines;


    for (int line = 1; line <= numOfLines; ++line) {
       
        printSpacesAndStars(numOfLines - line, 2 * line - 1);
    }

    return 0;
}
