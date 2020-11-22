
#include <iostream>
#include <iomanip>
using namespace std;

main()
{
	string s = "ngo van dong";
	float d = 12.346;
	s = s + to_string(d);
	cout << s;
}