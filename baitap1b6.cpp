#include <iostream>
using namespace std;
int main() {
    int year;
    cout << "Nhap nam: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
    {
        cout << "Nam nhuan";
    }
    else {
        cout << "Khong phai nam nhuan";
    }
    return 0;

}