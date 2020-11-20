#include "admin_user.h"
#include <iostream>
using namespace std;
#include "smartphone.h"
void admin_user::display1()
{

	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM SMARTPHONE ORDER BY qty_sold desc", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		cout <<endl<< "Sap xep theo ban chay nhat" << endl;
		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int smartphone_id;
		char smartphone_name[50];
		char brand[20];
		int	price;
		int qty;
		int qty_sold;
		int RAM;
		int ROM;
		int battery;
		float screen;
		char color[20];
		int cameras;
		char warranty[20];
		char others[100];
		int i = 0;
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &smartphone_id, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, brand, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_INTEGER, &qty_sold, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 7, SQL_INTEGER, &RAM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &ROM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &battery, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 10, SQL_C_FLOAT, &screen, 1, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 11, SQL_CHAR, color, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 12, SQL_INTEGER, &cameras, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 13, SQL_CHAR, warranty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 14, SQL_CHAR, others, SQL_RESULT_LEN, &ptrSqlVersion);


			//display query result
			smartphone* Sm = new smartphone(smartphone_id, smartphone_name, brand, price,
				qty, qty_sold, RAM, ROM, battery, screen, color, cameras, warranty, others);
			(*Sm).print();
			cout << "***********************************"<<endl;
		}
	}
	SQLCancel(sqlStmtHandle);
}

void admin_user::display2()
{

	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM SMARTPHONE ORDER BY price", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		cout << endl << "Sap xep theo gia tang dan" << endl;
		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int smartphone_id;
		char smartphone_name[50];
		char brand[20];
		int	price;
		int qty;
		int qty_sold;
		int RAM;
		int ROM;
		int battery;
		float screen;
		char color[20];
		int cameras;
		char warranty[20];
		char others[100];
		int i = 0;
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &smartphone_id, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, brand, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_INTEGER, &qty_sold, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 7, SQL_INTEGER, &RAM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &ROM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &battery, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 10, SQL_C_FLOAT, &screen, 1, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 11, SQL_CHAR, color, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 12, SQL_INTEGER, &cameras, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 13, SQL_CHAR, warranty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 14, SQL_CHAR, others, SQL_RESULT_LEN, &ptrSqlVersion);


			//display query result
			smartphone* Sm = new smartphone(smartphone_id, smartphone_name, brand, price,
				qty, qty_sold, RAM, ROM, battery, screen, color, cameras, warranty, others);
			(*Sm).print();
			cout << "***********************************" << endl;
		}
	}
	SQLCancel(sqlStmtHandle);
}

void admin_user::display3()
{

	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM SMARTPHONE ORDER BY price desc", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		cout << endl << "Sap xep theo gia giam dan" << endl;
		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int smartphone_id;
		char smartphone_name[50];
		char brand[20];
		int	price;
		int qty;
		int qty_sold;
		int RAM;
		int ROM;
		int battery;
		float screen;
		char color[20];
		int cameras;
		char warranty[20];
		char others[100];
		int i = 0;
		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &smartphone_id, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, brand, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 6, SQL_INTEGER, &qty_sold, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 7, SQL_INTEGER, &RAM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &ROM, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &battery, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 10, SQL_C_FLOAT, &screen, 1, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 11, SQL_CHAR, color, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 12, SQL_INTEGER, &cameras, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 13, SQL_CHAR, warranty, SQL_RESULT_LEN, &ptrSqlVersion);
			SQLGetData(sqlStmtHandle, 14, SQL_CHAR, others, SQL_RESULT_LEN, &ptrSqlVersion);


			//display query result
			smartphone* Sm = new smartphone(smartphone_id, smartphone_name, brand, price,
				qty, qty_sold, RAM, ROM, battery, screen, color, cameras, warranty, others);
			(*Sm).print();
			cout << "***********************************" << endl;
		}
	}
	SQLCancel(sqlStmtHandle);
}

void admin_user::search1()
{
	string s;
	cout << "Tim kiem theo ten:" << endl;
	cout << "Search: ";
	getline(cin, s);
	string s1= "select count(*) from SMARTPHONE where smartphone_name like '%" + s + "%'";
	string s2 = "select * from SMARTPHONE where smartphone_name like '%" + s + "%'";
	char* m = new char[s1.length() + 1];
	strcpy_s(m, s1.length() + 1, s1.c_str());
	char* m2 = new char[s2.length() + 1];
	strcpy_s(m2, s2.length()+1, s2.c_str());
	int n = 1;
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {
		cout << endl;
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		if(SQLFetch(sqlStmtHandle) == SQL_SUCCESS) 
			SQLGetData(sqlStmtHandle, 1, 4, &n, SQL_RESULT_LEN, NULL);
	}
	SQLCancel(sqlStmtHandle);
	if (n != 0) {
		if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m2, SQL_NTS)) {
			cout << endl;
			cout << "Error querying SQL Server";
			cout << "\n";
			close();
		}
		else {
			//declare output variable and pointer
			SQLINTEGER ptrSqlVersion;
			int smartphone_id;
			char smartphone_name[50];
			char brand[20];
			int	price;
			int qty;
			int qty_sold;
			int RAM;
			int ROM;
			int battery;
			float screen;
			char color[20];
			int cameras;
			char warranty[20];
			char others[100];
			int i = 0;
			while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
				SQLGetData(sqlStmtHandle, 1, 4, &smartphone_id, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 2, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 3, SQL_CHAR, brand, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 6, SQL_INTEGER, &qty_sold, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 7, SQL_INTEGER, &RAM, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &ROM, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &battery, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 10, SQL_C_FLOAT, &screen, 1, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 11, SQL_CHAR, color, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 12, SQL_INTEGER, &cameras, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 13, SQL_CHAR, warranty, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 14, SQL_CHAR, others, SQL_RESULT_LEN, &ptrSqlVersion);


				//display query result
				smartphone* Sm = new smartphone(smartphone_id, smartphone_name, brand, price,
					qty, qty_sold, RAM, ROM, battery, screen, color, cameras, warranty, others);
				(*Sm).print();
				cout << "***********************************" << endl;
			}
		}
		SQLCancel(sqlStmtHandle);
	}
}

void admin_user::search2()
{
	string s;
	cout << "Tim kiem theo hang:" << endl;
	cout << "Search: ";
	getline(cin, s);
	string s1 = "select count(*) from SMARTPHONE where brand like '%" + s + "%'";
	string s2 = "select * from SMARTPHONE where brand like '%" + s + "%'";
	char* m = new char[s1.length() + 1];
	strcpy_s(m, s1.length() + 1, s1.c_str());
	char* m2 = new char[s2.length() + 1];
	strcpy_s(m2, s2.length() + 1, s2.c_str());
	int n = 1;
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
	if (n != 0) {
		if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m2, SQL_NTS)) {
			cout << endl;
			cout << "Error querying SQL Server";
			cout << "\n";
			close();
		}
		else {
			//declare output variable and pointer
			SQLINTEGER ptrSqlVersion;
			int smartphone_id;
			char smartphone_name[50];
			char brand[20];
			int	price;
			int qty;
			int qty_sold;
			int RAM;
			int ROM;
			int battery;
			float screen;
			char color[20];
			int cameras;
			char warranty[20];
			char others[100];
			int i = 0;
			while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
				SQLGetData(sqlStmtHandle, 1, 4, &smartphone_id, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 2, SQL_CHAR, smartphone_name, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 3, SQL_CHAR, brand, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &price, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &qty, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 6, SQL_INTEGER, &qty_sold, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 7, SQL_INTEGER, &RAM, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 8, SQL_INTEGER, &ROM, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 9, SQL_INTEGER, &battery, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 10, SQL_C_FLOAT, &screen, 1, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 11, SQL_CHAR, color, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 12, SQL_INTEGER, &cameras, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 13, SQL_CHAR, warranty, SQL_RESULT_LEN, &ptrSqlVersion);
				SQLGetData(sqlStmtHandle, 14, SQL_CHAR, others, SQL_RESULT_LEN, &ptrSqlVersion);


				//display query result
				smartphone* Sm = new smartphone(smartphone_id, smartphone_name, brand, price,
					qty, qty_sold, RAM, ROM, battery, screen, color, cameras, warranty, others);
				(*Sm).print();
				cout << "***********************************"<< endl;
			}
		}
		SQLCancel(sqlStmtHandle);
	}
}
