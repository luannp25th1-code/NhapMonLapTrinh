#include "Array.h"
#include <iostream>
using namespace std;
#define MAX 100
int main()
{
    int a[MAX], n = 0;
    input(a, n);
    //output(a, n);
    //giatrichan(a, n);
    //vitriam(a, n);
    //giatrilonnhat(a, n);
    //vitrinhonhat(a, n);
    //nguyentonhohon100(a, n);
    //tonggiatriam(a, n);
    //sapxep(a, n);
    //output(a, n);
    int kq = vitrichandautien(a, n);
    if (kq == -1) {
        cout << "Khong co gia tri chan trong mang" << endl;
    }
    else {
        cout << "Gia tri chan dau tien: " << kq << endl;
    }

}

