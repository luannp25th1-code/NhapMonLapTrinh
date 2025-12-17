bool NguyenTo(int n) {
	int dem = 0;
	for (int i = 1; i <= n;i++)
		if (n % i == 0)
			dem++;
	if (dem == 2)
		return true;
	return false;
}
int DemChuSo(int n) {
	int dem = 0;
	while (n > 0) {
		n /= 10;
		dem++;
	}
	return dem;
}
int UCLN(int a, int b) {
	while (a != b) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}