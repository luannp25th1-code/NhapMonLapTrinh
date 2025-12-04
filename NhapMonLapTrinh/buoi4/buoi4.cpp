#include <iostream>
using namespace std;

void cau1() {
    int a, b, c;
    cout << "Nhap a, b, c: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << a;
    if (b > a && b > c)
        cout << b;
    if (c > b && c > a)
        cout << c;
}

void cau2() {
    int sotien;
    cout << "Nhap so tien: ";
    cin >> sotien;
    int to500k = sotien / 500000;
    cout << "So to 500k: " << to500k < , endl;
    sotien -= to500k * 500000;
    int to200k = sotien / 200000;
    cout << "So to 200k: " << to200k < , endl;
    sotien -= to200k * 200000;
    int to100k = sotien / 100000;
    cout << "So to 100k: " << to100k < , endl;
    sotien -= to100k * 100000;
    int to50k = sotien / 50000;
    cout << "So to 50k: " << to50k < , endl;
    sotien -= to50k * 50000;
    int to20k = sotien / 20000;
    cout << "So to 500k: " << to500k < , endl;
    sotien -= to500k * 500000;
    int to500k = sotien / 500000;
    cout << "So to 500k: " << to500k < , endl;
    sotien -= to500k * 500000;
}
int main()
{
    std::cout << "Hello World!\n";
}

