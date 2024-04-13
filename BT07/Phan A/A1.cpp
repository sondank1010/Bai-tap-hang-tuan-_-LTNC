#include <bits/stdc++.h>
using namespace std;

//con trỏ chưa khởi tạo
int main()
{
    //Con trỏ chưa khởi tạo
    int* pX1;
    cout<<pX1<<endl;     //0x401a7b
    cout<<*pX1<<endl;    //1528349827
    *pX1 = 0;
    return 0;
    // Con trỏ chưa khởi tạo có thể chứa dữ liệu rác (địa chỉ ngẫu nhiên)
    // Truy nhập chúng dẫn đến các lỗi ghi đè dữ liệu, ghi vào vùng cấm ghi….segmentation faults, v.v..


    //Truy cập con trỏ NULL
    int* pX2 = NULL;
    cout<<pX2<<endl;     
    cout<<*pX2<<endl;   
    *pX2 = 0;
    return 0;
    //Tương đương truy nhập địa chỉ 0 trong bộ nhớ


    

 s
    

    //Giải phóng cấp phát động quá sớm
    int* p = new int;
    int* p2 = p;
    *p = 10;
    cout << *p2 << endl;    //10
    delete p;
    cout << *p2;            //17791712
    //Giải phóng p làm cho p2 trở thành con trỏ vào vùng nhớ không còn hiệu lực

}