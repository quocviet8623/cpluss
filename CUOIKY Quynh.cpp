#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

#define ESC 27

using namespace std;

struct QuanLiSinhVien
{
	string maMonHoc;
	string tenMon;
	int soTinChi;
	float tiLeDiemQT;
	float tiLeDiemThi;
};

typedef struct QuanLiSinhVien QLMH;

void ThongTinMonHoc(QLMH& x)
{
	while (cin.get() != '\n');
	cout << "\nNhap ma mon hoc: ";
	getline(cin, x.maMonHoc);
	cout << "Nhap ten mon hoc: ";
	getline(cin, x.tenMon);
	cout << "Nhap so tin chi: ";
	cin >> x.soTinChi;
	cout << "Nhap ti le diem qua trinh: ";
	cin >> x.tiLeDiemQT;
	cout << "Nhap ti le diem thi: ";
	cin >> x.tiLeDiemThi;
}

void nhapThongTinMonHoc_vector(vector<QLMH>& mh, int n)
{
	QLMH x;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin mon hoc thu " << i + 1 << ":" << endl;
		ThongTinMonHoc(x);
		mh.push_back(x);
	}
}

void inMonHoc(QLMH x)
{
	cout << setw(15) << left << x.maMonHoc
		<< setw(20) << left << x.tenMon
		<< setw(12) << left << x.soTinChi
		<< setw(21) << left << x.tiLeDiemQT
		<< setw(19) << left << x.tiLeDiemThi
		<< endl;
}

void inMonHoc_vector(vector<QLMH> mh)
{
	cout << "\n\t\t\t----THONG TIN MON HOC----" << endl;
	cout << setw(15) << left << "MA MON HOC"
		<< setw(20) << left << "TEN MON HOC"
		<< setw(12) << left << "SO TIN CHI"
		<< setw(21) << left << "TI LE DIEM QUA TRINH"
		<< setw(19) << left << "TI LE DIEM THI"
		<< endl;

/*	for (const auto& i : mh)
{
	inMonHoc(i);
}
*/
}

int timMonHoc(const vector<QLMH>& mh, int tinChi)
{
	for (int i = 0; i < mh.size(); i++)
	{
		if (mh[i].soTinChi == tinChi)
		{
			return i;
		}
	}
	return -1; // Tr? v? -1 n?u không t?m th?y
}

void ghiFile(const vector<QLMH>& mh, const string& tenTep)
{
	ofstream outfile(tenTep);
	if (!outfile)
	{
		cout << "Loi ghi file!" << endl;
		exit(0);
	}
	for (const auto& i : mh)
	{
		outfile << i.maMonHoc << "\t" << i.soTinChi << "\t" << i.tenMon << "\t" << i.tiLeDiemQT << "\t" << i.tiLeDiemThi << endl;
	}
	outfile.close();
	cout << "Ghi file thanh cong!" << endl;
}

void docFile(vector<QLMH>& mh, const string& tenTep)
{
	ifstream infile(tenTep);
	if (!infile)
	{
		cout << "Loi doc file!" << endl;
		exit(0);
	}
	QLMH x;
	while (infile >> x.maMonHoc >> x.soTinChi)
	{
		infile.ignore();
		getline(infile, x.tenMon, '\t');
		infile >> x.tiLeDiemQT;
		infile >> x.tiLeDiemThi;
		infile.ignore(); // B? d?u xu?ng d?ng
		mh.push_back(x);
	}
	infile.close();
	cout << "Doc file thanh cong!" << endl;
}

/*int menu()
{
	system("cls");
	cout << "===========MENU==========" << endl;
	cout << "\n1. NHAP DANH SACH MON HOC";
	cout << "\n2. HIEN THI TAT CA CAC MON HOC MAN HINH";
	cout << "\n3. LUU DANH SACH MON HOC VAO TAP TIN CO TEN DATA.INP";
	cout << "\n4. DOC DANH SACH MON HOC CO TEN DATA.INP";
	cout << "\n5. LIET KE CAC MON HOC THEO SO TIN CHI";
	cout << "\nESC. THOAT CHUONG TRINH" << endl;
	return _getch();
}
*/
int main()
system("cls");
	cout << "===========MENU==========" << endl;
	cout << "\n1. NHAP DANH SACH MON HOC";
	cout << "\n2. HIEN THI TAT CA CAC MON HOC MAN HINH";
	cout << "\n3. LUU DANH SACH MON HOC VAO TAP TIN CO TEN DATA.INP";
	cout << "\n4. DOC DANH SACH MON HOC CO TEN DATA.INP";
	cout << "\n5. LIET KE CAC MON HOC THEO SO TIN CHI";
	cout << "\nESC. THOAT CHUONG TRINH" << endl;
	return _getch();
{
	vector<QLMH> mh;
	int chon;

	do
	{
		chon = menu();

		switch (chon)
		{
		case '1':
		{
			int soMonHoc;
			cout << "\nNhap so mon hoc can quan li: ";
			cin >> soMonHoc;
			nhapThongTinMonHoc_vector(mh, soMonHoc);
			break;
		}
		case '2':
			inMonHoc_vector(mh);
			break;
		case '3':
			ghiFile(mh, "DATA.INP");
			break;
		case '4':
			docFile(mh, "DATA.INP");
			break;
		case '5':
		{
			int tinChi;
			cout << "\nNhap so tin chi can liet ke: ";
			cin >> tinChi;
			int index = timMonHoc(mh, tinChi);
			if (index != -1)
			{
				cout << "Mon hoc co so tin chi " << tinChi << ":\n";
				inMonHoc(mh[index]);
			}
			else
			{
				cout << "Khong tim thay mon hoc co so tin chi " << tinChi << "!\n";
			}
			break;
		}
		default:
			cout << "Nhap sai! Vui long nhap tu 1-5 hoac ESC de thoat chuong trinh!" << endl;
		}

		system("pause");
	} while (chon != ESC);

	return 0;
}

