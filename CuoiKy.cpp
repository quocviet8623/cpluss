#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>

#define MAX 100
using namespace std;
int nhap_danh_sach_mon_hoc(void);

void nhap_thong_tin_mon_hoc(list_mon_hoc* list_mh, int n) ;
void hien_thi_thong_tin_mon_hoc(list_mon_hoc* list_mh) ;
void tim_mon_hoc_theo_so_tc(list_mon_hoc* list_mh, int so_tc) ;
void int(char *file, char data[MAX 100][MAX 100]);
int menu();
typedef struct MonHoc
{
	char ma_mon_hoc[20];
	char ten_mon[100];
	int so_tin_chi;
	float ti_le_diem_qua_trinh;
	float ti_le_diem_thi; 
}MonHoc;

typedef vector<MonHoc> list_mon_hoc;
list_mon_hoc list_mh;
char file[] = "DATA.INP";

//nhap so mon hoc 
int nhap_danh_sach_mon_hoc(void)
{
	cout << "nhap so mon hoc (n>=1): \t";
	int n;
		cin >> n;

	while(!cin || n <=0) {
	    cout << "vui long nhap du lieu >=0 ! \n";
	    cin.clear(); 
	    cin.ignore();
	    cin >> n;
	}
	return n;
}
//nhap thong tin mon hoc vao vector


void nhap_thong_tin_mon_hoc(list_mon_hoc* list_mh, int n) 
{
	char select;
	MonHoc tmp;
	
	if (!list_mh->empty()) 
	{
		cout << "danh sach khong rong. ban co muon them du lieu (Y/N): ";
		cin >> select;
		if (select == 'N' || select == 'n')
			return;
	}

	for (int i = 0; i < n; i++) 
	{
		cout << "nhap thong tin mon hoc" << i+1;
		
		cout << "\nnhap ma mon hoc: ";
		cin >> tmp.ma_mon_hoc;

		cout << "\nnhap ten mon hoc: ";
		cin >> tmp.ten_mon;

		// so tin chi > 0
		cout << "\nnhap so tin chi: ";
		cin >> tmp.so_tin_chi;

		while(!cin|| tmp.so_tin_chi > 0) {
		    cin.clear(); 
		    cin.ignore();
		    cin >> tmp.so_tin_chi;
			}
		

		//ti le diem qua trinh phai < 100% (< 1)
		cout << "\nnhap ti le diem qua trinh: ";
		cin >> tmp.ti_le_diem_qua_trinh;
		
		while(!cin || tmp.ti_le_diem_qua_trinh < 1 ) {
		    cin.clear(); 
		    cin.ignore(); 
		    cin >> tmp.ti_le_diem_qua_trinh;
			}

		//ti le diem thi phai < 100% (< 1)
		cout << "\nnhap ti le diem thi: ";
		cin >> tmp.ti_le_diem_thi;
		
		while(!cin || tmp.ti_le_diem_thi < 1 ) {
		    cin.clear(); 
		    cin.ignore(); 
		    cin >> tmp.ti_le_diem_thi;
			}

		if(!cin) 
		{
		    cin.clear(); 
		    cin.ignore(); 
		}
		list_mh->push_back(tmp);
	}
	return;
}	

void hien_thi_thong_tin_mon_hoc(list_mon_hoc* list_mh) 
{

	for (int i = 0; i < list_mh.size(); i++) 
	{
		cout << "ma mon hoc: " << tmp.ma_mon_hoc << "\n";

		cout << "ten mon hoc: " << tmp.ten_mon << "\n";

		cout << "so tin chi " << tmp.so_tin_chi << "\n";

		cout << "ti le diem qua trinh = " << tmp.ti_le_diem_qua_trinh << "\n";

		cout << "ti le diem thi  " << tmp.ti_le_diem_thi << "\n";
	}
}

void tim_mon_hoc_theo_so_tc(list_mon_hoc* list_mh, int so_tc) 
{
	
	if(list_mh->empty()) {
		cout << "danh sach mon hoc trong \n";
		return;
	}
	
	cout << "nhap so tin chi de tim";
	cin >> so_tc;
	for(int i =0 ; i < list_mh.size(); i++)
	{
		if(so_tc == MonHoc.so_tin_chi )
		{
			cout << "ma mon hoc: " << MonHoc.ma_mon_hoc << "\n";

			cout << "ten mon hoc: " << MonHoc.ten_mon << "\n";

			cout << "so tin chi " << MonHoc.so_tin_chi << "\n";

			cout << "ti le diem qua trinh = " << MonHoc.ti_le_diem_qua_trinh << "\n";

			cout << "ti le diem thi  " << MonHoc.ti_le_diem_thi << "\n";
		}
	
	}
		
}	

void init(char *file, char data[MAX 100][MAX 100])
{
	ifstream in;
	in.open(file);
	if (!in)
	{
		cout << "Loi mo file." << endl;
		exit(0);
	}
	
	in.close();
}
int menu()
{
	char selection;
	cout << "1. nhap danh sach mon hoc." << endl;
	cout << "2. hien thi all mon hoc." << endl;
	cout << "3. luu danh sach mon hoc." << endl;
	cout << "4. doc danh sach mon hoc." << endl;
	cout << "Q. Quit the program." << endl;
	cin >> selection;
	return selection;
}


int main()
{
	char selection; 
	char data[MAX 100][MAX 100];	
	int(file, data);
	
	do
	{
		system("cls");
		selection = menu();
		switch (selection)
		{
		case '1':
			system("cls");
			nhap_thong_tin_mon_hoc(plan);
			system("pause");
			break;
		case '2':
			system("cls");
			hien_thi_thong_tin_mon_hoc(plan);
			system("pause");
			break;

		case 'q':
		case 'Q':
			return 0;
		}
	} while (true);
}





