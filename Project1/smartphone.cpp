#include "smartphone.h"
#include <iostream>
using namespace std;

smartphone::smartphone() {
	this->smartphone_id = 0;
	strcpy_s(this->smartphone_name, "");
	strcpy_s(this->brand, "");
	this->price = 0;
	this->qty = 0;
	this->qty_sold = 0;
	this->RAM = 0;
	this->ROM = 0;
	this->battery = 0;
	this->screen = 0;
	strcpy_s(this->color, "");
	this->cameras = 0;
	strcpy_s(this->warranty, "");
	strcpy_s(this->others, "");
}
smartphone::smartphone(int id, char* name, char* brand, int price, int qty, int qty_sold, int ram
	, int rom, int battery, float screen, char* color, int cameras, char* warranty, char* others) {
	this->smartphone_id = id;
	strcpy_s(this->smartphone_name , name);
	strcpy_s(this->brand, brand);
	this->price = price;
	this->qty = qty;
	this->qty_sold = qty_sold;
	this->RAM = ram;
	this->ROM = rom;
	this->battery = battery;
	this->screen = screen;
	strcpy_s(this->color, color);
	this->cameras = cameras;
	strcpy_s(this->warranty, warranty);
	strcpy_s(this->others ,others);
}
smartphone::~smartphone() {

}
void smartphone::print()
{
	cout << "*******Smartphone feature********" << endl;
	cout << "Id: " << this->smartphone_id << endl;
	cout << "Name: " << this->smartphone_name << endl;
	cout << "Brand: " << this->brand << endl;
	cout << "Price: " << this->price << endl;
	cout << "Quantity: " << this->qty << endl;
	cout << "Sold: " << this->qty_sold << endl;
	cout << "RAM: " << this->RAM << endl;
	cout << "ROM: " << this->ROM << endl;
	cout << "Battery: " << this->battery << endl;
	cout << "Screen: " << this->screen << endl;
	cout << "Color: " << this->color << endl;
	cout << "Cameras: " << this->cameras << endl;
	cout << "Warranty: " << this->warranty << endl;
	cout << "Others: " << this->others << endl;
}
void smartphone::scan()
{
	cout << "*******Enter smartphone feature********"<<endl;
	cout << "Id: ";cin>> this->smartphone_id ;
	cin.ignore();
	cout << "Name: "; cin.getline(this->smartphone_name,50) ;
	cout << "Brand: "; cin.getline(this->brand,20) ;
	cout << "Price: ";cin>> this->price ;
	cout << "Qantity: "; cin >> this->qty;
	cout << "Sold: ";cin>> this->qty_sold;
	cout << "RAM: ";cin>> this->RAM;
	cout << "ROM: ";  cin >> this->ROM;
	cout << "Battery: ";cin>> this->battery;
	cout << "Screen: ";cin>> this->screen;
	cin.ignore();
	cout << "Color: "; cin.getline(this->color,20) ;
	cout << "Cameras: ";cin>> this->cameras ;
	cin.ignore();
	cout << "Warranty: "; cin.getline(this->warranty,20) ;
	cout << "Others: "; cin.getline( this->others,100 );
}

void smartphone::update()
{
	cout << "******Enter smartphone feature*******" << endl;
	cin.ignore();
	cout << "Name: "; cin.getline(this->smartphone_name, 50);
	cout << "Brand: "; cin.getline(this->brand, 20);
	cout << "Price: "; cin >> this->price;
	cout << "Qantity: "; cin >> this->qty;
	cout << "Sold: "; cin >> this->qty_sold;
	cout << "RAM: "; cin >> this->RAM;
	cout << "ROM: ";  cin >> this->ROM;
	cout << "Battery: "; cin >> this->battery;
	cout << "Screen: "; cin >> this->screen;
	cin.ignore();
	cout << "Color: "; cin.getline(this->color, 20);
	cout << "Cameras: "; cin >> this->cameras;
	cin.ignore();
	cout << "Warranty: "; cin.getline(this->warranty, 20);
	cout << "Others: "; cin.getline(this->others, 100);
}

