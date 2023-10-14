#include <iostream>
using namespace std;
int main()
{
	// tinh toan bien c trong cong thuc voi du lieu dau vao la f. Cong thuc c = 5.0 / 9*(f -32).
	float a, b;
	cout << "Nhap so can tinh :";
	cin >> a ;
	b = 5.0/9*(a-32);
	cout << b << endl;
	system("pause");
}
