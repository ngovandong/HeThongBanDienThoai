#pragma once
#include <string>
#include <iostream>
#include "admin.h"

using namespace std;
class smartphone
{
protected:
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
public:
	friend class admin;
	smartphone();
	smartphone(int,char*,char*,int,int,int,int,int,int,float,char*,int,char*,char*);
	~smartphone();
	void print();
	void scan();
	void update();
};

