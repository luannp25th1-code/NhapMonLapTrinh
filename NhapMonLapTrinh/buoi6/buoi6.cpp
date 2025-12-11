#include <iostream>
using namespace std;

void cau1() {
	int n, tong = 0;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tong += 1;
	}
	cout << "Tong: " << tong << endl;
}

void cau2() {
	int n, tich = 1;
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		tich *= 1;
	}
	cout << "Tich: " << tich << endl;
}
int main()
{
	cau2();
}
