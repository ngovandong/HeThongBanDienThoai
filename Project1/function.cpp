#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include "DBHelper.h"
#include <string>

using namespace std;

void function1(){
    int chon;
    cout<<"Sap xep theo:\n";
    cout<<"1.Mua nhieu nhat\n";
    cout<<"2.Gia thap den cao\n";
    cout<<"3.Cao den thap\n";
    cout<<"chon kieu sap xep: ";cin>>chon;
    system("cls");
    switch (chon)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    default:
        cout<<"Khong co chuc nang nay!"<<endl;
        cin.ignore();
        getchar();
        system("cls");
        break;
    }

}

void function2(){
    int chon;
    cout<<"Tim kiem theo:\n";
    cout<<"1.Ten\n";
    cout<<"2.Hang\n";
    cout<<"Chon: ";cin>>chon;
    system("cls");
    switch (chon)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    default:
        cout<<"Khong co chuc nang nay!"<<endl;
        cin.ignore();
        getchar();
        system("cls");
        break;
    }
}
void function3(){

}
void function4(){

}
void function5(){

}
int main() {
    int dangnhap;
	cout << "\t\tHE THONG HO TRO MUA BAN DIEN THOAI\n\n";
    cout<<"Dang nhap voi tu cach ?\n";
    cout<<"Nhap 0 de dang nhap voi tu cach admin \n";
    cout<<"Nhap 1 de dang nhap voi tu cach khach hang\n";
    cout<<"Chon: ";
    cin>>dangnhap;
    system("cls");
    if(dangnhap)
    {
        int out=1;
        while(out){
            int chon;
            cout<<"Chuc nang:\n";
            cout<<"1.Xem dien thoai\n";
            cout<<"2.Tim san pham\n";
            cout<<"3.Tu van dien thoai\n";
            cout << "4.Mua dien thoai\n";
            cout<<"5.Thoat\n";
            cout<<"Chon chuc nang:";
            cin>>chon;
            system("cls");
            switch (chon)
            {
            case 1:
                function1();
                break;
            case 2:
                function2();
                break;
            case 3:
                //function3();
                break;
            case 4:
                //
                break;
            case 5:
                out=0;
                break;    
            default:
                cout<<"Khong co chuc nang nay!"<<endl;
                cin.ignore();
                getchar();
                system("cls");
                break;
            }
        }
    }
    else
    {
        int out=1;
        while(out){
            int chon;
            cout<<"Chuc nang:\n";
            cout<<"1.Xem dien thoai\n";
            cout<<"2.Tim san pham\n";
            cout<<"3.Xem don hang\n";
            cout<<"4.Them sua xoa dien thoai\n";
            cout<<"5.Thoat\n";
            cout<<"Chon chuc nang:";
            cin>>chon;
            system("cls");
            switch (chon)
            {
            case 1:
                function1();
                break;
            case 2:
                function2();
                break;
            case 3:
                //function3();
                break;
            case 4:
                //function4();
                break;
            case 5:
                out=0;
                break;    
            default:
                cout<<"Khong co chuc nang nay!"<<endl;
                cin.ignore();
                getchar();
                system("cls");
                break;
            }
        
        }
    }

	return 0;
}