// StudentManagementCPlusPlus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//include the below additional libraries
#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include "DBHelper.h"
#include <string.h>
#include "admin.h"
#include "smartphone.h"
#include "admin_user.h"
#include "user.h"
//use the std namespace
using namespace std;
int main()
{
	//user::getInstance()->init();
	user::getInstance()->display1();
	//user::getInstance()->close();
	return 0;
}

