#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
class medicine
{
public:
	string name;
	int count;
	int price;


	medicine(void)
	{
		name = "Unknown";
		count = 0;
		price = 0;
	}
	medicine(string a, int b, int c)
	{
		name = a;
		count = b;
		price = c;
	}
	medicine operator+ (int d);
	medicine operator- (int r);
	medicine operator+= (int dd);
	medicine operator-= (int rd);

	string getname()
	{
		return name;
	}
	int getprice()
	{
		return price;
	}
	int getcount()
	{
		return count;
	}
	void setname(string value)
	{
		name = value;
	}
	void setcount(int value)
	{
		count = value;
	}
	void setprice(int value)
	{
		price = value;
	}


};
medicine medicine :: operator+ (int d) // Перевантаження оператора + 
{
	this->price = price + d;
	return *this;
}
medicine medicine :: operator- (int r) // Перевантаження оператора - 
{
	this->price = price - r;
	return *this;
}
medicine medicine:: operator+= (int dd) // Перевантаження оператора += 
{
	this->count += dd;
	return *this;
}
medicine medicine :: operator-= (int rd) // Перевантаження оператора -=
{
	this->count -= rd;
	return *this;
}
