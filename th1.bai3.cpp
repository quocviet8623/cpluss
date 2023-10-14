//viet chuong trinh tinh muc luong
 #include <iostream>
 using namespace std;
 int main()
 {
  /*khai bao cac bien thu nhap (thuNhap),
   muc luong 1 gio (mucLuong),
  so gio lam (soGio), 
  thu nhap sau thue (thuNhapSauThue) ,
   tien chi cho quan ao va phu kien (tienDo), 
  tien do dung hoc tap (tienHocTap), 
  tien mua trai phieu tiet kiem (tienTietKiem),
  tien bo me danh de mua them trai phieu (boMeTietKiem)*/
   float boMeTietKiem, mucLuong, tienTietKiem, tienHocTap, tienDo, soGio, thuNhap, thuNhapSauThue;
  //nhap muc luong 1 gio va so gio lam
   cout <<"nhap muc luong 1 gio: ";
   cin >> mucLuong;
   cout <<"nhap so gio lam: ";
   cin >> soGio;
   
  //tinh thu nhap truoc thue va sau thue
   thuNhap = mucLuong * soGio;
   thuNhapSauThue = thuNhap - ((thuNhap * 14.0) / 100.0);
   
  //tinh so tien chi cho quan ao va phu kien
   tienDo = (thuNhap *10.0) / 100.0;
   
  //tinh so tien chi cho do dung hoc tap
   tienHocTap = thuNhap / 100.0;
   
  //tien ban bo ra mua trai phieu tiet kiem
   tienTietKiem = ((thuNhapSauThue - tienDo - tienHocTap) * 25.0) / 100.0; 
   
  //tien bo me chi mua trai phieu bo sung
   boMeTietKiem = tienTietKiem / 2.0;
  //cau a
   cout <<"thu nhap truoc thue la: " << thuNhap << endl;
   cout <<"thu nhap sau thue la: " << thuNhapSauThue << endl;
  //cau b  
   cout <<"so tien ban chi cho quan ao va cac phu kien khac la: " << tienDo << endl;
  //cau c 
   cout <<"so tien ban chi cho do dung hoc tap: " << tienHocTap << endl;
  //cau d
   cout <<"so tien ban chi de mua trai phieu tiet kiem: " << tienTietKiem << endl;
  //cau e
   cout <<"so tien ba me ban chi de mua trai phieu: " << boMeTietKiem << endl;
   system ("pause");  
 }
