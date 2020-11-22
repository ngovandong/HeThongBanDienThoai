#pragma once
#include "admin_user.h"
#include "smartphone.h"
class user :
    public admin_user
{
protected:
    smartphone* phone;
    int size; 
public:
    user();
    ~user();
    void buy();
    void consult();
};

