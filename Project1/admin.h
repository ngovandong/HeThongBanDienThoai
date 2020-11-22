#pragma once
#include "smartphone.h"
#include "DBHelper.h"
#include "admin_user.h"
class smartphone;
class admin: public admin_user
{
public:
	admin();
	~admin();
	bool login();
	void insert();
	void update();
	void Delete(); 
	void displayInvoice();
};

