#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> init(int m, int n, int k) {
    vector<vector<char>> v(m, vector<char>(n, '-'));
    srand(time(nullptr));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            v[i].push_back('-');
        }
        v.push_back(v[i]);
    }
    while (k--) {
        int y = rand() % m;
        int x = rand() % n;
        if (v[y][x] != '*') {
            v[y][x] = '*';
        } else {
            k++;
        }
    }
    return v;
}

bool isMine(vector<vector<char>> Map, int m, int n, int x, int y){\
    if (x < 0 || x >= n || y < 0 || y >= m) {
        cout << "Invalid coordinates\n";
        return false;
    }
    if (Map[y][x] == '*') {
        return true;
    } 
    return false;
}

int countMine(vector<vector<char>> Map, int m, int n, int x, int y) {
    int cnt(0);
    for (int i = y-1; i <= y+1 && i >= 0 && i < m; i++) {
        for (int j = x-1; j <= x+1 && j >= 0 && j < n; j++) {
            if (Map[i][j] == '*') cnt++;
        }
    }
    return cnt;
}
void printCurr(vector<vector<char>> currMap, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << currMap[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int m, n, k;
    cin >> m >> n >> k;
    vector<vector<char>> map = init(m, n, k);  
    vector<vector<char>> currMap(m, vector<char>(n, '-'));
    int cnt(0);
    while (true) {
        int x, y; 
        cout << "Input x, y: \n"; 
        cin >> x >> y;
        if (isMine(map, m, n, x, y)) {
            currMap[y][x] = '*';
            printCurr(currMap, m, n);
            cout << "You're dead\n";
            break;
        } else {
            cnt++;
            int mine = countMine(map, m, n, x, y);
            currMap[y][x] = '0' + mine;
            printCurr(currMap, m, n);
        }
        if (cnt + k == m*n) {
            cout << "You win!\n";
            break;
        }
    }
    return 0;
}
