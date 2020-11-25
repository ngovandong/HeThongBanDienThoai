#include "user.h"

user::user()
{
	this->phone = nullptr;
	this->size = 0;
}

user::~user()
{
	delete[] this->phone;
}

void user::buy()
{
	char name[30],address[50] ,phone[20];
	cout << "Enter your infomation: " << endl;
	cout << "Name: ";
	cin.getline(name, 30);
	cout << "Phonenumber: ";
	cin.getline(phone, 20);
	cout << "Address: ";
	cin.getline(address, 50);
	//insert customer
	string s = "INSERT INTO CUSTOMER(customer_name,phonenumber,address) values('";
	s = s + name + "','" + phone + "','" +address + "')";
	char* m = new char[s.length()];
	strcpy_s(m, s.length() + 1, s.c_str());

	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m, SQL_NTS)) {

		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}

	//select customer_id recent
	int customer_id=-1;
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"select max(customer_id) from CUSTOMER ", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {
		
		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int id;
		if(SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &id, SQL_RESULT_LEN, &ptrSqlVersion);
			customer_id = id;
		}
	}
	SQLCancel(sqlStmtHandle);
	
	//insert invoice
	string s1 = "INSERT INTO INVOICE(date_buy,customer_id) values(getdate(),";
	s1 = s1 + to_string(customer_id)+ ")";
	char* m1 = new char[s1.length()];
	strcpy_s(m1, s1.length() + 1, s1.c_str());
	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m1, SQL_NTS)) {

		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	//select invoice_id recent
	int invoice_id=-1;
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"select max(invoice_id) from INVOICE ", SQL_NTS)) {
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	else {

		//declare output variable and pointer
		SQLINTEGER ptrSqlVersion;
		int id;
		if (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
			SQLGetData(sqlStmtHandle, 1, 4, &id, SQL_RESULT_LEN, &ptrSqlVersion);
			invoice_id = id;
		}
	}
	SQLCancel(sqlStmtHandle);
	//choose smartphone need buy
	this->display1();
	string s2 = "  exec  procupdatedata ";
	int smartphone_id, qty;
	while (true) {
		cout << "\nChoose smartphone_id you need to buy: ";
		cin >> smartphone_id;
		cout << "Quantity: ";
		cin >> qty;
		int k = 1;
		s2 = s2 + to_string(invoice_id) + ", " + to_string(smartphone_id) + ", " + to_string(qty);
		cout << "Continue buy ? (if continue press 1, if stop press 0): ";
		cin >> k;
		if (!k) break;
		s2 += "  exec  procupdatedata ";
	}
	//insert invoice detail
	char* m2 = new char[s2.length()];
	strcpy_s(m2, s2.length() + 1, s2.c_str());

	if (SQL_SUCCESS != SQLExecDirectA(sqlStmtHandle, (SQLCHAR*)m2, SQL_NTS)) {

		cout << "\n";
		cout << "Error querying SQL Server";
		cout << "\n";
		close();
	}
	
	cout << "Buy success!\n";
}

void user::consult()
{
}
