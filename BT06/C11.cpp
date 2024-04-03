#include <bits/stdc++.h>
using namespace std;

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string decToBinary(int n) {
    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}


int binaryToDec(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

int main() {
    int num;
   
    cin >> num;

   cout << decToBinary(num) << endl;

    string binaryNum;

    cin >> binaryNum;

    cout  << binaryToDec(binaryNum) << endl;

    return 0;
}
