
#include <iostream>
#include  <iomanip>
#define MAX 300
using namespace std;

void Nhap1SV ( unsigned long int& maSV, float &diemQT, float &diemThi);   // usigned long luôn di voi int/char , khai bao sô.
void NhapSV(unsigned long int maSV[], float diemQT[], float diemThi[], int n);
void tinhDiemHP(float diemQT[], float diemThi[], float diemHP[], int n);
void inThongTin(unsigned long int maSV[], float diemQT[], float diemThi[], float diemHP[], int n );
int main(){
	unsigned long int maSV[300];
	float diemQT[300], diemThi[300], diemHP[300];
	int n;
	cout <<" Nhap so luong sinh vien :";
	cin >> n;
	NhapSV(maSV, diemQT, diemThi, n);
	tinhDiemHP(diemQT, diemThi, diemHP, n);
	inThongTin( maSV, diemQT, diemThi, diemHP,n);
	system ("pause");
}

void Nhap1SV (unsigned long int& maSV, float &diemQT, float& diemThi)
	{
		cout<< "Nhap ma sinh vien: ";
		cin >> maSV;
		cout << "Nhap diem qua trinh: ";
		cin >> diemQT;
		cout << "Nhap diem thi : ";
		cin >> diemThi;
	}
void NhapSV(unsigned long int maSV[], float diemQT[], float diemThi[], int n)	
	{
		for (int i =0; i < n; i++)
		{
			cout << "Nhap du lieu cho sinh vien thu " << i + 1 << ":" <<endl;
			Nhap1SV(maSV[i], diemQT[i], diemThi[i]); 
		}
	}
void tinhDiemHP(float diemQT[], float diemThi[], float diemHP[], int n)
	{
		for (int i = 0; i < n; i++){
		
		diemHP[i] = diemQT[i]* 0.4 +diemThi[i]* 0.6;
	          }
	}	
void inThongTin(unsigned long int maSV[], float diemQT[], float diemThi[], float diemHP[], int n ) // setw dung de tao ra 20 khoang trong , vaf cach dong .
	{
		cout << setw(20) << "Ma sinh vien "
			 << setw(20) << " Diem qua trinh"
			 << setw(20) << "Diem thi "
			 << setw(20) << " Diem hoc phan "
			 << endl;
		for (int i = 0; i < n; i++)
			{
				cout << setw(20) << maSV[i]
					<< setw(20) << diemQT[i]
					<< setw(20) << diemThi[i]
					<< setw(20) << diemHP[i]
					<< endl;
			}
	//	cout << maSV[i] << " " << diemQT[i] << " " << diemThi[i] << " " << diemHP
		}	
		
		
		// Bai giua ky thu 2
#include<iostream>
#include<string> // luu gia tri
#include<conio.h>//
void Nhap(int maKH[], string tenHH[], int soLuong[], int n);
void xuatKho(int maHH[], int soLuong[],int ma, int sl, int n);
int main()
	{
		int maHH[100];
		string tenHH[100];
		int soLuong[100];
		int n;
		char chon;
		do 
		{
			cout << "1.Nhap du lieu hang hoa.";
			cout << "2.Xuat kho";
			cout << "3.In du lieu."<< endl;
			cout << "ESC. thoat.";
			chon= _getch();
			switch (chon)
			{
				case '1':
						cout << "Nhap so luong hang hoa :";
						cin >> n;
						Nhap(maKH, tenHH, soLuong, n);
						system ("pause");
						break;
				case ' 2':
						int ma, sl;
						cout <<"Nhap ma hang can xuat kho :";
						cin >> ma;
						cout << "Nhap so luong can xuat kho:";
						cin sl;
						xuatKho(maHH, soLuong, ma, sl, n);
						system("pause");
						break;
				case '3':
						inDuLieu(maHH, tenHH, soLuong, n);
						system("pause");
						break;		
			}
		}while (chon != 27);
	
	}

void Nhap(int maKH[], string tenHH[], int soLuong[], int n)
	{
		for (int i = 0; i <n; i++)
		{
			cout << "Nhap ma hang :";
			cin >> maHH[i];
			cout << "Nhap ten hang hoa :";
			cin >> tenHH[I];
			cout << "Nhap so luong :";
			cin >> soLuong[I];
		}
	}	
void xuatKho(int maHH[], int soLuong[],int ma, int sl, int n)
	{
		int vt = -1;
		for(int i =0; i <n; i++)
		    if(maHH[i] == ma)
		        vt = i;
		    if (vt == -1)
			    cout << "Khong tim thay ma hang :";
				else
				{
					if(soLuong[vt]>=sl)
					{
						soLuong[vt] = soLuong[vt] - sl;
						cout << " Xuat kho thanh cong ";
					}
					else
						cout<< "Khong du so luong xuat kho.";
				}    
	}				
