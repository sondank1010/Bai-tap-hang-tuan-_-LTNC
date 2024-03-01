#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    double max(0), min(0), avg, sum(0);
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
        sum += a[i];

    }
    avg = sum / n;
    cout << "max:" << max;
    cout << "min:"<< min;
    cout <<"avg:"<< avg;
    return 0;



}
