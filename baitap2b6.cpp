#include <iostream>
using namespace std;
int main ()
{
    float diem;
    string khuVuc;
    cout << "Nhap diem thi: ";
    cin >> diem ;
    cout << "Nhap khu vuc: ";
    cin >> khuVuc;
    if (diem >= 20)
    {
        if ( khuVuc == "KV1"){
            diem = diem + 0.75;
        } if (khuVuc == "KV2") {
            diem = diem + 0.5;
        } else {
            diem = diem + 0;
        }
        cout << " Diem sau khi cong uu tien la: " << diem;
    } 
    else {
        cout << " Khong du dieu kien xet tuyen";
    }
    return 0;
}