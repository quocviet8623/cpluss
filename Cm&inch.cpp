// Chuong trinh doi do dai tu don vi cm -> inch

#include <iostream>
using namespace std;
int main(){
	
	// Dat so an dinh ( cm_> inch)
	const double CM_PER_INCH = 2.54;
	
	double inch;  // luu o don vi inch
	double cm;  // luu do dai o don vi cm
	
	cout << " Nhap do dai o don vi inch :" ; // lenh xuat.
	cin >> inch; // lenh nhap.
	
	cm = inch * CM_PER_INCH ; // câu lenh quy doi don vi.
	
	cout << " Do dai o don vi cm :"<< cm << endl;
	
    System ("pause")
   return kq;
}  
	
	

	

	
