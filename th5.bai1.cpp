#include <iostream>
#include <cmath>
using namespace std;
int main(){


	int n; 
	cout << "Nhap n: " << endl;
	cin >> n;
	cout <<"Tong binh phuong tu 1 -> n la : " << (n) << endl;
	system("pause");
}
 int tongBP(int n){
	if( n==1)
	{
		return 1;
	}
	

	return pow(n,2) + pow(tongBP(n-1),2);
	
}
/* #include <iostream>
#include <iomanip>
using namespace std;

int tongBinhPhuong(int n);
int An(double a, int n);
int daoNguoc(int n);

int Max(int* p, int n);

double thanhToanCoDinh(double L, double r, int t, int m);

/*
* Hàm tính ti?n còn l?i sau khi dã thanh toán k l?n:
* L ti?n vay
* r lãi su?t
* m s? l?n thanh toán trong 1 nam
* t th?i gian vay (nam)
* k là s? l?n dã thanh toán
=//
double tinhTienConLai(double L, double r, int t, int m, int k);


int main()
{
	
	/*double L, r, R;
	int m, t, k;
	cout << "Nhap khoan vay: ";
	cin >> L;
	cout << "Nhap lai suat: ";
	cin >> r;
	cout << "Nhap thoi gian vay: ";
	cin >> t;
	cout << "So lan tra trong 1 nam: ";
	cin >> m;
	R = thanhToanCoDinh(L, r, t, m);
	cout << setprecision(0) << fixed;
	cout << "So tien thanh toan co dinh moi lan: " << R << endl;
	cout << "Tong tien phai tra: " << R * m * t << endl;
	cout << "Nhap so lan da thanh toan: ";
	cin >> k;
	cout << "So tien con lai chua thanh toan: "
		<< tinhTienConLai(L, r, t, m, k) << endl;
	=///
	int a[] = { 4, 5, 6, 7, 2, 1, 0 };
	int n = 7;
	cout << Max(a, n) << endl;
	system("pause");
}

double thanhToanCoDinh(double L, double r, int t, int m)
{
	double R, i;
	r = r / 100;
	i = r / m;
	R = (L * i) / (1 - pow(1 + i, -m * t));
	return R;
}

double tinhTienConLai(double L, double r, int t, int m, int k)
{
	double R, L1;
	double i = (r /100) / m;
	R = thanhToanCoDinh(L, r, t, m);
	L1 = R * (1 - pow(1 + i, -m * t + k)) / i;
	return L1;
}

int tongBinhPhuong(int n)
{
	if (n == 0)
		return 0;
	else
		return n * n + tongBinhPhuong(n - 1);
}

int An(double a, int n)
{
	if (n == 0)
		return 1;
	else
		return a * An(a, n - 1);
}

int daoNguoc(int n)
{
	if (n <= 9)
		return n;
	else
	{
		int dv = n % 10;
		n = n / 10;
		int tg = n;
		while (tg > 0)
		{
			dv = dv * 10;
			tg = tg / 10;
		}
		return dv + daoNguoc(n);
	}
}

int Max(int* p, int n)
{
	if (n == 1)
		return p[0];
	else
	{
		int tg = Max(p, n - 1);
		if (p[n - 1] > tg)
			return p[n - 1];
		else
			return tg;
	}
			
}   */
