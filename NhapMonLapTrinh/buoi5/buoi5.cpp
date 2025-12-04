#include <iostream>
using namespace std;
void cau3() {
    int a, b;
    cout << "Nhap a, b: ";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0)
            cout << "Phuong trinh vo so nghiem" << endl;
        else
            cout << "Phuong trinh vo nghiem " << endl;
    }
    else {
        cout << "Nghia la: " << (-b * 1.0 / a) << endl;
    }
}

void cau4() {
    int thang;
    cout << "Nhap thang: ";
    cin >> thang;
    if (thang <= 3) {
        cout << "Quy 1";
    }
    else if (thang <= 6) {
        cout << "Quy 2";
    }
    else if (thang <= 9) {
        cout << "Quy 3";
    }
    else {
        cout << "Quy 4";
    }
}

void cau5() {
    int a, b, c;
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b) {
        if (a == b && b == c) {
            cout << "Tam giac deu" << endl;
        }
        else if (a == b || b == c || c == a) {
            cout << "Tam giac can" << endl;
        }
        else if (b * b == a * a + c * c || a * a == b * b + c * c || c * c == a * a + b * b) {
            cout << "Tam giac vuong" << endl;
        }
        else {
            cout << "Tam giac thuong" << endl;
        }
    }
    else {
        cout << "Khong la tam giac" << endl;
    }
}

void cau6() {
#include <iostream>
#include <cmath>
#include <iomanip>

    using namespace std;

    // Hàm chính của chương trình
    int main() {
        double a, b, c;

        // Yêu cầu người dùng nhập các hệ số a, b, c
        cout << "--- Chuong trinh giai phuong trinh bac hai (ax^2 + bx + c = 0) ---" << endl;
        cout << "Nhap he so a: ";
        cin >> a;
        cout << "Nhap he so b: ";
        cin >> b;
        cout << "Nhap he so c: ";
        cin >> c;
        cout << endl;

        // Trường hợp 1: a = 0 (Trở thành phương trình bậc nhất: bx + c = 0)
        if (a == 0) {
            cout << "Vi a = 0, day la phuong trinh bac nhat: " << b << "x + " << c << " = 0" << endl;
            if (b == 0) {
                if (c == 0) {
                    cout << "Phuong trinh vo so nghiem (0 = 0)." << endl;
                }
                else {
                    cout << "Phuong trinh vo nghiem (vi du: 0x + 5 = 0 la 5 = 0 - vo ly)." << endl;
                }
            }
            else {
                // Nghiệm duy nhất: x = -c/b
                double x = -c / b;
                cout << "Phuong trinh co mot nghiem duy nhat: x = " << fixed << setprecision(4) << x << endl;
            }
        }
        // Trường hợp 2: a != 0 (Phương trình bậc hai thực sự)
        else {
            // 1. Tính biệt thức Delta (Δ = b^2 - 4ac)
            double delta = b * b - 4 * a * c;

            cout << "Biệt thức Delta (Δ) = " << fixed << setprecision(4) << delta << endl;

            // 2. Xét các trường hợp của Delta
            if (delta < 0) {
                cout << "Phuong trinh vo nghiem thuc vi Delta < 0." << endl;
            }
            else if (delta == 0) {
                // Nghiệm kép: x1 = x2 = -b / (2a)
                double x = -b / (2 * a);
                cout << "Phuong trinh co nghiem kep: x1 = x2 = " << fixed << setprecision(4) << x << endl;
            }
            else { // delta > 0
                // Hai nghiệm phân biệt: x1 = (-b + sqrt(delta)) / (2a), x2 = (-b - sqrt(delta)) / (2a)
                double x1 = (-b + sqrt(delta)) / (2 * a);
                double x2 = (-b - sqrt(delta)) / (2 * a);

                cout << "Phuong trinh co hai nghiem phan biet:" << endl;
                cout << "  x1 = " << fixed << setprecision(4) << x1 << endl;
                cout << "  x2 = " << fixed << setprecision(4) << x2 << endl;
            }
        }

        return 0;
    }
}

int main()
{
    cau6();
}

