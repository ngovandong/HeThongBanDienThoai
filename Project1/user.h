#pragma once
#include "admin_user.h"
#include "smartphone.h"
class user :
    public admin_user
{
private:
    smartphone* phone;
    int size; 
    user();
    ~user();
    static user* m_instance;
public:
    static user* getInstance();
    void buy();
    void consult();
};

