// Bai 1 thuc hanh 2
#include<iostream>
using namespace std;

int main()
{
    int stk,phut;
    char maDV;  

    cout << "Nhap so tai khoan cua ban: ";
    cin>>stk;
    cout<<"Nhap ma DV (r hoac R la dich vu thuong || p hoac P la dich vu cao cap): ";
    cin>>maDV;

    float sotien;
    if(maDV=='r' || maDV =='R')
    {
        cout<<"Nhap so phut da su dung: ";
        cin>>phut;
        sotien = 10.00;
        if(phut<=50)
        {
        	cout<<"\n";
            cout<<"So tai khoan cua ban la:"<<stk<<endl;
            cout<<"Loai dich vu cua ban la:"<<maDV<<endl;
            cout<<"So phut goi cua ban la:"<<phut<<endl;
            cout<<"So tien phai tra cua ban la($):"<<sotien<< endl;
        }
        else if(phut>50)
        {
            sotien = 10.00+ (phut-50)*0.20;
            cout<<"\n";
            cout<<"So tai khoan cua ban la:"<<stk<<endl;
            cout<<"Loai dich vu cua ban la:"<<maDV<<endl;
            cout<<"So phut goi cua ban la:"<<phut<<endl;
            cout<<"So tien phai tra cua ban la($):"<<sotien<< endl;
        }
    }

    else if(maDV=='p' ||maDV=='P')
    {
        sotien=25.0;
        float sotien1,sotien2;
        int phut1,phut2;
        cout<<"Nhap so phut ban su dung vao ban ngay:";
        cin>>phut1;
        if(phut1<0)
        {
            cout<<"Nhap so phut sai";
            return 0;
        }
        cout<<"Nhap so phut ban su dung vao ban dem:";
        cin>>phut2;
        if(phut1==0)
        {
        	sotien1=0;
            if(phut2<0)
            {
                cout<<"Nhap so phut sai";
                return 0;
            }
            else if(phut2==0)
            {
                sotien2=sotien1=0;
            }
            else if(phut2<=100)
            {
                sotien2=25.00;
            }
            else if(phut2>100)
            {
                sotien2=25.00+(phut2-100)*0.05;
            }
            sotien=sotien2;
            phut=phut1+phut2;
            cout<<"\n";
            cout<<"So tai khoan cua ban la:"<<stk<<endl;
            cout<<"Loai dich vu cua ban la:"<<maDV<<endl;
            cout<<"So phut goi cua ban la:"<<phut<<endl;
            cout<<"So tien phai tra cua ban la($):"<<sotien<< endl;

        }

        else if(phut1<=75)
        {
            sotien1=25.00;
            if(phut2<0)
            {
                cout<<"Nhap so phut sai";
                return 0;
            }
            else if(phut2==0)
            {
                sotien2=0;
            }
            else if(phut2<=100)
            {
                sotien2=0;
            }
            else if(phut2>100)
            {
                sotien1=sotien1+(phut2-100)*0.05;
            }
            sotien=sotien1+sotien2;
            phut=phut1+phut2;
            cout<<"\n";
            cout<<"So tai khoan cua ban la:"<<stk<<endl;
            cout<<"Loai dich vu cua ban la:"<<maDV<<endl;
            cout<<"So phut goi cua ban la:"<<phut<<endl;
            cout<<"So tien phai tra cua ban la($):"<<sotien<< endl;

        }
        else if(phut1>75)
        {
            sotien1=25.00+(phut1-75)*0.10;
            if(phut2<0)
            {
                cout<<"Nhap so phut sai";
                return 0;
            }
            else if(phut2==0)
            {
                sotien2=0;
            }
            else if(phut2<=100)
            {
                sotien2=0;
            }
            else if(phut2>100)
            {
                sotien1=sotien1+(phut2-100)*0.05;
            }
            sotien=sotien1+sotien2;
            phut=phut1+phut2;
            cout<<"\n";
            cout<<"So tai khoan cua ban la:"<<stk<<endl;
            cout<<"Loai dich vu cua ban la:"<<maDV<<endl;
            cout<<"So phut goi cua ban la:"<<phut<<endl;
            cout<<"So tien phai tra cua ban la($):"<<sotien<< endl;
        }
    }
    else
    {
        cout<<"Nhap sai loai dich vu!"<<endl;
    }

    return 0;
}

