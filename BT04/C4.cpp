#include <iostream>
using namespace std;
int countMines( int n, int m,int x, int y, char **a){
    int mines = 0;
    for(int dx = -1; dx <= 1; dx ++){
        for(int dy = -1; dy <= 1; dy++ ){
            int nx = x + dx;
            int ny = y + dy;
             if (nx >= 0 && nx < m && ny >= 0 && ny < n && a[nx][ny] == '*') {
                mines++;
            }

        }

    }
    return mines;
}
int main(){
    int m, n;
    cin >> m >> n;
    char ** a = new char*[m];
    for(int i = 0; i < m; i++){
        a[i] = new char[n];
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '*') cout << '*' << ' ';

        else
            {
                cout << countMines(n, m, i, j, a) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
