#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159;
    double bankinh;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> bankinh;
    double chuvi = 2 * PI * bankinh;
    double dientich = PI * bankinh * bankinh;
    cout << "Chu vi hinh tron la: " << chuvi << endl;
    cout << "Dien tich hinh tron la: " << dientich;
    return 0;
}