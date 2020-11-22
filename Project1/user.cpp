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

}

void user::consult()
{
}
