#include <iostream>
using namespace std;

int main(){
	int giay, phut, gio;
	cout<<"Nhap giay : ";
	 cin >> giay;
	gio = giay / 3600;
	giay = giay % 3600;
	phut = giay /60;
	giay = giay %60;
	cout << "Sau khi duoc chuyen: = ";

	if ( gio < 10 )
	   cout << "0" << gio << ":";
	   else
	       cout << gio << ":" ;
	if ( phut < 10 )
	   cout << "0" << phut << ":";
	    else
		    cout << phut << ":";
	if ( giay < 10 )	    
	   cout << "0" << giay << ":";
		else
		    cout  << giay;
			
	return 0;
	}			       
