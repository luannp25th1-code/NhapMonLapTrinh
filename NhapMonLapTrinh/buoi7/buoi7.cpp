/*#include <iostream>
using namespace std;
double thueNhaNuoc(double luong[], int phuthuoc) {
	double tongThuNhap = 0;
	for (int i = 0; i < 12; i++) {
		tongThuNhap += luong[i];
	}
	double giamTru = phuthuoc * 1600000 * 12;
	double thuNhapTinhThue = tongThuNhap - giamTru;
	if (thuNhapTinhThue < 0) return 0;
	double thue = 0;

	if (thuNhapTinhThue <= 48000000) {
		thue = 0;
	}
	else if (thuNhapTinhThue <= 72000000) {
		thue = (thuNhapTinhThue - 48000000) * 0.05;
	}
	else if (thuNhapTinhThue <= 108000000) {
		thue = 24000000 * 0.05 + (thuNhapTinhThue - 72000000) * 0.10;
	}
	else if (thuNhapTinhThue <= 168000000) {
		thue = 24000000 * 0.05 + 36000000 * 0.10 + (thuNhapTinhThue - 108000000) * 0.15;
	}
	return thue;
}

	double thueDoanhNghiep(double luong[], int phuthuoc) {
		double tongThue = 0;
		for (int i = 0; i < 12; i++) {
			double giamTru = phuthuoc * 1600000;
			double thuNhapTinhThue = luong[i] - giamTru;

			if (thuNhapTinhThue <= 0) {
				continue;
			}
			double thue = 0;
			if (thuNhapTinhThue <= 4000000) {
				thue = 0;
			}
			else if (thuNhapTinhThue <= 6000000) {
				thue = (thuNhapTinhThue - 4000000) * 0.05;
			}
			else if (thuNhapTinhThue <= 9000000) {
				thue = 2000000 * 0.05 + (thuNhapTinhThue - 6000000) * 0.10;
			}
			else {
				thue = 2000000 * 0.05 + 3000000 * 0.10 + 3000000 * 0.10 + (thuNhapTinhThue - 9000000) * 0.15;
			}
			tongThue += thue;
		}
		return tongThue;
	}


int main() {
	double luong[12] = { 7500000, 9000000, 8000000, 10000000, 12000000, 8500000, 8500000, 9000000, 7500000, 11000000, 13000000, 20000000 };
	int phuthuoc = 3;
	double A = thueNhaNuoc(luong, phuthuoc);
	double B = thueDoanhNghiep(luong, phuthuoc);
	if (A > B)
		cout << "Dong them: " << A - B << endl;
	else
		cout << "Hoan thue: " << B - A << endl;
	return 0;
}*/

#include <iostream>
using namespace std;

double thueNhaNuoc(double luong, int phuthuoc) {
	double thunhapchiuthue = luong - phuthuoc * 1600000;
	if (thunhapchiuthue <= 48000000)
		return 0;
	if (thunhapchiuthue <= 72000000)
		return (luong - 48000000) * 0.05;
	if (thunhapchiuthue <= 108000000)
		return (luong - 72000000) * 0.1 + thueNhaNuoc(72000000, phuthuoc);
	if (thunhapchiuthue <= 168000000)
		return (luong - 108000000) * 0.15 + thueNhaNuoc(108000000, phuthuoc);
	if (thunhapchiuthue <= 288000000)
		return (luong - 168000000) * 0.2 + thueNhaNuoc(168000000, phuthuoc);
	if (thunhapchiuthue <= 528000000)
		return (luong - 288000000) * 0.25 + thueNhaNuoc(288000000, phuthuoc);
	if (thunhapchiuthue <= 1008000000)
		return (luong - 528000000) * 0.3 + thueNhaNuoc(528000000, phuthuoc);
	if (thunhapchiuthue > 1008000000)
		return (luong - 1008000000) * 0.35 + thueNhaNuoc(1008000000, phuthuoc);
}
	
double thueDoanhNghiep(double luong, int phuthuoc) {
	double thunhapchiuthue = luong - phuthuoc * 1600000;
	if (thunhapchiuthue <= 4000000)
		return 0;
	if (thunhapchiuthue <= 6000000)
		return (luong - 4000000) * 0.05;
	if (thunhapchiuthue <= 9000000)
		return (luong - 6000000) * 0.1 + thueDoanhNghiep(6000000, phuthuoc);
	if (thunhapchiuthue <= 14000000)
		return (luong - 9000000) * 0.15 + thueDoanhNghiep(9000000, phuthuoc);
	if (thunhapchiuthue <= 24000000)
		return (luong - 14000000) * 0.2 + thueDoanhNghiep(14000000, phuthuoc);
	if (thunhapchiuthue <= 44000000)
		return (luong - 24000000) * 0.25 + thueDoanhNghiep(24000000, phuthuoc);
	if (thunhapchiuthue <= 84000000)
		return (luong - 44000000) * 0.3 + thueDoanhNghiep(44000000, phuthuoc);
	if (thunhapchiuthue > 84000000)
		return (luong - 84000000) * 0.35 + thueDoanhNghiep(84000000, phuthuoc);

}
double thueDoanhNghiepnam(double luong[], int phuthuoc) {
	double tongThue = 0;
	for (int i = 0; i < 12; i++) {
		tongThue += thueDoanhNghiepnam(luong, phuthuoc);
	}
	return tongThue;
}
	

int main() {
	double luong[12] = { 7500000, 9000000, 8000000, 10000000, 12000000, 8500000, 8500000, 9000000, 7500000, 11000000, 13000000, 20000000 };
	int phuthuoc = 3;
	double A = thueNhaNuoc(luong[1], phuthuoc);
	double B = thueDoanhNghiep(luong[1], phuthuoc);
	if (A > B)
		cout << "Dong them: " << A - B << endl;
	else
		cout << "Hoan thue: " << B - A << endl;

}