    #include <iostream>
    #include <conio.h>
    using namespace std;
    #define ESC 27
	#define TAB 9
    #define M_V 1
    #define V_M -1
    int main()
    {
        int chon;
        int mode = 1;                              // 1: My->Viet; -1 : Viet->My
        do
        {
            system("cls");                             // xoa man hinh
            if (mode==M_V)
			{
            	cout << "1.inch -> cm." << endl;
            	cout << "2.feet -> dm." << endl;
            	cout << "3.yard -> m." << endl;
            	cout << "4.mile -> km." << endl;
			}       
			else
			{
				cout << " 1.cm -> inch." << endl;
				cout << "2.dm -> feet." << endl;
				cout << "3.m -> yard." << endl;
				cout << "4.km -> mile." << endl;
			}
			
				const double CM_PER_INCH = 2.54;
				const double DM_PER_FEET = 3.048;
				const double M_PER_YARD = 0.9144;
				const double KM_PER_MILE = 1.609343;
				
				
			cout << "Bam ESC thoat chuong trinh." << endl;
			chon =_getch();
			switch (chon)
			{
				case'1':   // dau '_' dung de an dinh nut de nhap  du lieu vao
					double inch,cm;
					if (mode == M_V)
					{
						cout << "Nhap don vi inch:";  // lenh xuat
						cin >> inch;                        // lenh nhap
						cm = inch * CM_PER_INCH;
						cout << "don vi cm :" << cm << endl;
					}
					else
					{
						cout << "Nhap don vi cm:";
						cin >> cm;
						inch = cm / CM_PER_INCH;
						cout << "don vi inch :" << inch << endl;
					}
					system ("pause");
					break;
					case TAB: mode = - mode ;
					break;
				case'2': 
				double dm,feet;
				if (mode == M_V)
				{
				
				    cout << "Nhap don vi dm:";
			       	cin >> dm;
				    feet = dm * DM_PER_FEET;
				    cout << "don vi feet:" << feet << endl;
				
					}	
				else
					{
			        	
					cout << "Nhap don vi feet:";
					cin >> feet;
					dm = feet / DM_PER_FEET;
					cout << "don vi dm :" << dm << endl; 	
		        	}
		        	system ("pause");
		        	break;
		        case'3':
		        double m, yard;
		        if (mode == M_V )
		        {
		        	cout << "Nhap don vi m:";
		        	cin >> m;
		        	yard = m*M_PER_YARD;
		        	cout << "don vi yard:" << yard << endl;
				}
				else
				{
				    cout << "Nhap don vi yard:";
				    cin >> yard;
					m = yard/ M_PER_YARD;
					cout << "don vi m:" << m << endl; 	
		        }
		        system ("pause");
		        break;
		        case '4':
		        	double km,mile;
		        	if (mode == M_V)
		        	{
		        		cout << "Nhap don vi km:";
		        		cin >> km;                  //1,609343
						mile = km * KM_PER_MILE;
						cout << "don vi mile:" << mile << endl; 
					}
					else 
					{
						cout << "Nhap don vi mile:";
						cin >> mile;
						km = mile / KM_PER_MILE;
						cout << "don vi km :" << km << endl;
					}
					system ("pause");
					break;
					
		    }
		    
       } while (chon != ESC);
           
			 
			 
			
               system("cls");                             // xoa man hinh
            if (mode==M_V)                         // 1: My->Viet; -1 : Viet->My
             do
			 {
			                                                                 
			 	if (mode== M_V)
			 	{
			 		cout << "5.Ounce -> gr." << endl;
			 		cout << "6.Pound -> kg." << endl;
			 		cout << "7.Ton -> tan." << endl;
				 }
				 else
				 {
				 	cout << "5.gr -> Ounce. " << endl;
				 	cout << "6.kg -> Pound." << endl;
				 	cout << "7.tan -> Ton." << endl;
				 }
				 
				 const double OUNCE_PER_GR = 28.3495231;
				 
				 
				 
				 
				 
				 
			    chon =_getch();
				 switch (chon)
				 {
				 	case'5':
				 		double Ounce,gr;
				 		if(mode == M_V)
				 		{
				 			cout << "Nhap don vi Ounce:";
				 			cin>> Ounce;
				 			gr = Ounce* OUNCE_PER_GR;
							 cout << "don vi gr:" << gr << endl;                                     //28.3495231
						 }
						 system ("pause");
						 break;
						 case TAB: mode = - mode;
						 break;
				 }
			 }  while (chon != ESC);

} 

/*
 #include <iostream>
#include <conio.h>
#define M_V 1
#define V_M -1
#define ESC 27
#define TAB 9
#define ENTER 13
using namespace std;

//hàm x? lý meu d?i don v? d? dài
//hàm nh?n tham s? mode
//n?u mode = 1 ch? d? d?i My -> Viet
//n?u mode = -1 ch? d? d?i Viet -> My
//hàm tr? v? mã phím dã ch?n trong menu

int  menuDoiDoDai(int mode);
void doiDoDai(int &mode);

//hàm x? lý meu d?i don v? tr?ng lu?ng
//hàm nh?n tham s? mode
//n?u mode = 1 ch? d? d?i My -> Viet
//n?u mode = -1 ch? d? d?i Viet -> My
//hàm tr? v? mã phím dã ch?n trong menu

int  menuDoiTrongLuong(int mode);


//hàm x? lý menu d?i don v? nhi?t d?
//hàm nh?n tham s? mode
//n?u mode = 1 ch? d? d?i My -> Viet
//n?u mode = -1 ch? d? d?i Viet -> My
//hàm tr? v? mã phím dã ch?n trong menu

int  menuDoiNhietDo(int mode);


//Hàm x? lý menu chính

int menuChinh();

void troGiup();

//Hàm d?i don v? ti?n t?

void doiTienTe(int &mode);

int main()
{
	int chon, chon2;
	int mode = M_V;
	do
	{
		chon = menuChinh();
		switch (chon)
		{
		case '1':
			doiDoDai(mode);
			break;
		case '4':
			doiTienTe(mode);
			break;
		case 0:
		case 224:
			chon2 = _getch();
			if(chon2==59)
				troGiup();
			break;

		}

	} while (chon != ESC);

}

int menuDoiDoDai(int mode)
{
	system("cls");
	if (mode == M_V)
	{
		cout << "1.Doi tu Inch -> cm." << endl;
		cout << "2.Doi tu Feet -> dm." << endl;
		cout << "3.Doi tu Yard -> m." << endl;
		cout << "4.Doi tu Mile -> km." << endl;
		cout << "Bam phim ESC de thoat." << endl;
	}
	else
	{
		cout << "1.Doi tu cm -> Inch." << endl;
		cout << "2.Doi tu dm -> Feet." << endl;
		cout << "3.Doi tu m  -> Yard." << endl;
		cout << "4.Doi tu km -> Mile." << endl;
		cout << "Bam phim ESC de thoat." << endl;
	}
	
	return _getch();;
} // k?t thúc hàm menuDoiDoDai

void doiDoDai(int &mode)
{
	int chon;
	do
	{
		chon = menuDoiDoDai(mode);
		switch (chon)
		{
		case '1':
			double inch, cm;
			if (mode == M_V)
			{
				double inch, cm;
				cout << "Nhap vao don vi Inch: ";
				cin >> inch;
				cm = inch * 2.54;
				cout << "Don vi cm: " << cm << endl;
			}
			else
			{
				cout << "Nhap vao don vi cm: ";
				cin >> cm;
				cout << " " << endl;
				inch = cm / 2.54;
				cout << "Don vi Inch: " << inch << endl;
			}
			system("pause");
			break;
		case TAB:
			mode = -mode;
			break;
		}
	} while (chon != ESC);
}


int  menuDoiTrongLuong(int mode)
{
	system("cls");
	if (mode == M_V)
	{
		cout << "1.Doi tu Ounce -> gr." << endl;
		cout << "2.Doi tu Pound -> kg." << endl;
		cout << "3.Doi tu Ton -> tan." << endl;
		cout << "4.Nhan ESC de thoat." << endl;
	}
	else
	{
		cout << "1.Doi tu gr -> Ounce." << endl;
		cout << "2.Doi tu kg -> Pound." << endl;
		cout << "3.Doi tu tan -> Ton." << endl;
		cout << "4.Nhan ESC de thoat." << endl;
	}

	return _getch();
}//K?t thúc hàm d?i don v? tr?ng lu?ng

int  menuDoiNhietDo(int mode)
{
	system("cls");
	if (mode == M_V)
	{
		cout << "1.Doi tu Fahrenheit (do F) -> Celsius (do C)." << endl;
		cout << "2.Doi tu Kenvin (do K) -> Celsius (do C)." << endl;
		cout << "3.Nhan ESC de thoat." << endl;
	}
	else
	{
		cout << "1.Doi tu Celsius (do C) -> Fahrenheit (do F)." << endl;
		cout << "2.Doi tu Celsius (do C) -> Kenvin (do K)." << endl;
		cout << "3.Nhan ESC de thoat." << endl;
	}
	return _getch();
}

int menuChinh()
{
	system("cls");
	cout << "1. Doi don vi chieu dai." << endl;
	cout << "2. Doi don vi trong luong." << endl;
	cout << "3. Doi don vi nhiet do." << endl;
	cout << "4. Doi don vi tien te." << endl;
	cout << "Bam F1 de tro giup." << endl;
	cout << "Bam ESC de thoat." << endl;
	
	return _getch();
}

void doiTienTe(int &mode)
{
	int tiGia, tienUSD, tienVND;
	int chon;
	
	do
	{
		system("cls");
		if (mode == M_V)
			cout << "Doi tu USD -> VND?" << endl;
		else
			cout << "Doi tu VND -> USD?" << endl;
		
		cout << "Bam Enter de chap nhan." << endl;
		cout << "Bam TAB de doi che do." << endl;
		cout << "Bam ESC de thoat." << endl;
		
		chon = _getch();
		if (chon == TAB)
			mode = -mode;
		else if (chon == ESC)
			return;
	} while (chon != ENTER);
	cout << "Nhap ti gia: ";
	cin >> tiGia;
	if (mode == M_V)
	{
		cout << "Nhap so tien (USD): ";
		cin >> tienUSD;
		tienVND = tienUSD * tiGia;
		cout << "Tien (VND): " << tienVND << endl;
	}else
	{
		cout << "Nhap so tien (VND): ";
		cin >> tienVND;
		tienUSD = tienVND / tiGia;
		cout << "Tien (USD): " << tienUSD << endl;
	}
	
	system("pause");
	return;
}
void troGiup()
{
	system("cls");
	cout << "Day la chuc nang tro giup." << endl;
	system("pause");
	return;
}   	*/ 

