#include "admin.h"
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
admin::admin()
{
}

admin::~admin()
{
}

bool admin::login()
{
	int id;
	int password;
	cout << "Dang nhap:" << endl;
	cout << "Id: ";
	cin >> id;
	cout << "Password: ";
	cin >> password;
	string s;
	s = "select count(*) from ADMIN where id= " + to_string(id) + " and password= " + to_string(password);
	char* m = new char[s.length() + 1];
	strcpy_s(m, s.length() + 1, s.c_str());
	int n = 0;
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {
		cout << endl;
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		if (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
			SQLGetData(sqlStmtHandle, 1, 4, &n, SQL_RESULT_LEN, NULL);
	}
	SQLCancel(sqlStmtHandle);
	if (n) {
		cout << "\n~~~~~~~~~~~~Login success~~~~~~~~~~~~\n";
		return true;
	}
	else return false;
}

void admin::insert()
{
	smartphone a;
	a.update();
	string s = "INSERT INTO SMARTPHONE(smartphone_name,brand,price,qty,qty_sold,RAM,ROM,battery,screen,color,cameras,warranty,others) values('";
	s = s + a.smartphone_name + "','" + a.brand + "'," + to_string(a.price) + "," + to_string(a.qty) + ","
		+ to_string(a.qty_sold) +  "," + to_string(a.RAM) + "," + to_string(a.ROM) + "," + to_string(a.battery)
		+ "," + to_string(a.screen) + ",'" + a.color + "'," + to_string(a.cameras) + ",'" + a.warranty + "','" + a.others + "')";

	char* m = new char[s.length()];
	strcpy_s(m, s.length()+1 , s.c_str());
	
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {

		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {

		cout << "\nINSERT SUCCESS\n";
		return;
	}
}

void admin::update()
{
	int id;
	cout << "Enter smartphone_id need to update: ";
	cin >> id;
	smartphone a;
	a.update();
	string s = "UPDATE SMARTPHONE SET smartphone_name = '";
	s = s + a.smartphone_name + "', brand= '" + a.brand + "', price= " + to_string(a.price) + ", qty= " + to_string(a.qty)
		+ ", qty_sold= " + to_string(a.qty_sold) + ",RAM= " + to_string(a.RAM) + ",ROM= " + to_string(a.ROM)
		+ ",battery= " + to_string(a.battery) + ",screen= " + to_string(a.screen) + ",color= '" + a.color + "',cameras= "
		+ to_string(a.cameras) + ",warranty= '" + a.warranty + "', others= '" + a.others
		+ "' where smartphone_id= " + to_string(id);

	char* m = new char[s.length()];
	strcpy_s(m, s.length() + 1, s.c_str());
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {

		cout << "\nUPDATE SUCCESS\n";
		return;
	}
}

void admin::Delete()
{
	int id;
	cout << "Enter smartphone_id need to delete: ";
	cin >> id;
	string s = "Delete from SMARTPHONE where smartphone_id= ";
	s += to_string(id);
	char* m = new char[s.length()];
	strcpy_s(m, s.length() + 1, s.c_str());
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {
		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {

		cout << "\nDELETE SUCCESS\n";
		return;
	}
	
}

void admin::displayInvoice()
{
	cout << "Tat ca hoa don: " << endl;
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"select INVOICE.invoice_id,customer_name,date_buy,total,phonenumber,address,smartphone_name, INVOICE_DETAIL.qty, price,price*INVOICE_DETAIL.qty from INVOICE inner join INVOICE_DETAIL on INVOICE.invoice_id = INVOICE_DETAIL.invoice_id inner join SMARTPHONE on SMARTPHONE.smartphone_id = INVOICE_DETAIL.smartphone_id inner join CUSTOMER on CUSTOMER.customer_id = INVOICE.customer_id", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int id;
		char customer_name[30];
		char date[20];
		int total;
		char phonenumber[20];
		char address[60];
		char smartphone_name[50];
		int	price;
		int qty;
		int amount;
		int k = 0;
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &id, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, customer_name, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, date, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &total, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_CHAR, phonenumber, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_CHAR, address, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 7, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 10, SQL_INTEGER, &amount, SQL_RESULT_LEN, &ptrSqlVersion);


			//display query result
			if (k != id) {
				k = id;
				cout << "********************************************" << endl;
				cout <<endl<< "Id: " << id << endl; 
				cout << "Date: " << date<<endl;
				cout << "Total: " << total << endl;
				cout << "Customer name: " << customer_name<<endl;
				cout << "Phone: " << phonenumber << endl;
				cout << "Address: " << address << endl;
				cout << "--------------detail------------" << endl;
			}
			cout << "Smartphone name: " << smartphone_name << endl;
			cout << "Quantity: " << qty << endl;
			cout << "Unit_price: " << price << endl;
			cout << "Amount: " << amount << endl;
		}
	}
	SQLCancel(sqlStmtHandle);
}


