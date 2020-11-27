#pragma once
#include "smartphone.h"
#include "DBHelper.h"
#include "admin_user.h"
class smartphone;
class admin: public admin_user
{
private:
	admin();
	~admin();
	static admin* m_instance; // singleton
public:
	static admin* getInstance(); //singleton
	bool login();
	void insert();
	void update();
	void Delete(); 
	void displayInvoice();
};

