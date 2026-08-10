#include <iostream>
using namespace std;
int main (){
    int tuoi;
    double thunhap;
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    cout << "Nhap thu nhap: ";
    cin >> thunhap;
    bool duDieuKien = (tuoi >= 18) && (thunhap >= 5000000);
    cout << duDieuKien;
    return 0;

}