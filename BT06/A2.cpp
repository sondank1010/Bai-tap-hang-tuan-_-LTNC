#include <iostream>
using namespace std;
const int N = 5;
long long giaiThua(int n){
    cout << "n = " << n << " at " << &n << endl;
    if(n == 0){
        return 1;
    }
    return n * giaiThua(n - 1);
}
int main(){
    cout << giaiThua(N);
    return 0;
}
//  Kích thước của một stack frame cho hàm factorial phụ thuộc vào nhiều yếu tố như 
//  kiến trúc máy tính, hệ điều hành, và cách trình biên dịch xử lý việc lưu trữ dữ liệu. 