// Bai 2 thuc hanh 2
#include<iostream> 
using namespace std;

int main()
{
	int tienvay;
	float lai,khoanhangthang;
	cout<<"Nhap so tien ban muon vay: ";
	cin>>tienvay;
	cout<<"Nhap lai suat moi nam(%): ";
	cin>>lai;
	cout<<"Nhap khoan thanh toan hang thang: ";
	cin>>khoanhangthang;
	lai=lai/100;
	float laithang=lai/12;
	cout<<"lai thang la: "<<laithang<<endl;
	float tienlaithang=tienvay*laithang;
	float tientrathang=khoanhangthang-tienlaithang;
	if(tientrathang<tienlaithang)
	{
		cout<<"Khoan thanh toan hang thang qua thap, Voi khoan thanh toan nay tien vay khong duoc hoan tra!";
	}
	int dem=0;
	while(tientrathang<tienvay)
	{
		tienvay=tienvay-tientrathang;
		tienlaithang=tienvay*laithang;
		tientrathang=khoanhangthang-tienlaithang;
		dem++;
	}
	cout<<"So thang can tra het khoan vay la: "<<dem<<endl;
	return 0;
}





