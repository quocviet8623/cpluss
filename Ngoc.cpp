#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void Nhap(int maSV[], float diemQT[], float diemThi[], int n);
void tinhDiem(int maSV[], float diemQT[], float diemThi[], int n);

int main()
{
    int maSV[10];
    float diemQT[10];
    float diemThi[10];
    int n;
    cout << "Nhap so luong sinh vien: " << endl;
	cin >> n ;
	Nhap(maSV, diemQT,diemThi,n);
	tinhDiem(maSV, diemQT, diemThi,n); 
    system("pause");
}
void Nhap(int maSV[], float diemQT[], float diemThi[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ma sinh vien";
        cin >> maSV[i];
        cout << "Nhap diem qua trinh";
        cin >> diemQT[i];
        cout << "Nhap diem thi: ";
        cin >> diemThi[i];
    }
}
void tinhDiem(int maSV[], float diemQT[], float diemThi[], int n)
{

    for (int i = 0; i < n; i++) {
         (diemQT[i] * 40 + diemThi [i]* 60) / 100;
    }

}			
