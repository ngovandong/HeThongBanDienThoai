#pragma once
#include "DBHelper.h"
class admin_user :
    public DBHelper
{
public:
    void display1();// hien thi theo thu tu ban chay nhat
    void display2();// hien thi theo gia thap den cao
    void display3();// hien thi theo gia cao den thap
    void search1();// tiem theo ten dien thoai
    void search2();// tim theo hang
};

