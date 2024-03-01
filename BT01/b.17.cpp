#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    double w ,h;
    cin >> w >> h;
    double bmi = w / (h*h);
    cout << fixed << setprecision(2) << bmi;
}
