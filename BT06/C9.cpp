#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;


int randomLessThanN(int N) {
    
    srand(time(0));

   
    return rand() % N;
}

int main() {
    int N;

    cin >> N;

  
    cout << randomLessThanN(N) << endl;

    return 0;
}
