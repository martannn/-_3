#pragma once
#include <iostream>
#include "medicine.h"
using namespace std;
class MedMas
{
	medicine* Medicine;
	int countMed;
public:
	MedMas(int value) {
		countMed = value;
		Medicine = new medicine[countMed];
	}
	~MedMas() {
		delete[] Medicine;
	}
	void MedFill()
	{
		for (int i = 0; i < countMed; i++)
		{

			cout << "Name:";
			string name;
			cin >> name;
			cout << "Count:";
			int count;
			cin >> count;
			try // початок блока виключень
			{
				if (count != 0)
				{
					throw count;// ключове слово, що створює виключення
				}
				else
				{
					cout << "Enter right value!" << endl;
					system("pause");
				}
			}
			catch (int)// блок, що "ловить" виключення
			{
				cout << "Perehoplennya vuinyatku " << endl;
			}
			cout << "Cost:";
			int price;
			cin >> price;
			try {
				if (price != 0)
				{
					throw price;
				}
				else
				{
					cout << "Enter right value!" << endl;
					system("pause");
				}
			}
			catch (int)
			{
				cout << "Perehoplennya vuinyatku " << endl;
			}
			Medicine[i].setname(name);
			Medicine[i].setcount(count);
			Medicine[i].setprice(price);
			cout << "-------------------------------------------------" << endl;
		}
	}
	int Recept()
	{
		int costR = 0;
		for (int i = 0; i < countMed; i++)
		{
			cout << "Count of " << Medicine[i].getname() << " = "; int p1; cin >> p1;
			costR += (Medicine[i].getprice() * p1);

		}return costR;
	}
	int Recept(int u, int i) {

		int costR = (Medicine[i].getprice() * u);
		return costR;
	}
	void FindName()
	{
		cout << "search by name:"; string str; cin >> str;
		int t = 0;
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == str)
			{
				cout << " found:" << endl;
				cout << Medicine[i].getname() << " " << Medicine[i].getcount() << " " << Medicine[i].getprice() << endl;
				t = 1;
			}


		}
		if (t == 0)
		{
			cout << "not found" << endl;
		}
	}
	void FindName(string value)
	{
		int t = 0;
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == value)
			{
				cout << "found :" << endl;
				cout << Medicine[i].getname() << " " << Medicine[i].getcount() << " " << Medicine[i].getprice() << endl;
				t = 1;
			}


		}
		if (t == 0)
		{
			cout << "not found" << endl;
		}
	}
	void FindCount(int value)
	{
		int t = 0;
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getcount() == value)
			{
				cout << " found :" << endl;
				cout << Medicine[i].getname() << " " << Medicine[i].getcount() << " " << Medicine[i].getprice() << endl;
				t = 1;
			}
		}
		if (t == 0)
		{
			cout << "not found" << endl;
		}
	}
	void FindCost(int value)
	{
		int t = 0;
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getprice() == value)
			{
				cout << "Preparat founded:" << endl;
				cout << Medicine[i].getname() << " " << Medicine[i].getcount() << " " << Medicine[i].getprice() << endl;
				t = 1;
			}
		}
		if (t == 0)
		{
			cout << "not found" << endl;
		}
	}
	void IncCount(string str, int value)
	{
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == str)
			{
				Medicine[i].count += value;
				cout << "New count of preparate ";
				cout << Medicine[i].getname() << " = " << Medicine[i].getcount() << endl;
			}

		}
	}
	void RedCount(string str, int value)
	{
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == str)
			{
				Medicine[i].count -= value;
				cout << "New count of preparate ";
				cout << Medicine[i].getname() << " = " << Medicine[i].getcount() << endl;
			}


		}
	}
	void IncCost(string str, int value)
	{
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == str)
			{
				Medicine[i].price = Medicine[i].price + value;
				cout << "New price of preparate ";
				cout << Medicine[i].getname() << " = " << Medicine[i].getprice() << endl;
			}


		}
	}
	void RedCost(string str, int value)
	{
		for (int i = 0; i < countMed; i++)
		{
			if (Medicine[i].getname() == str)
			{
				Medicine[i].price = Medicine[i].price - value;
				cout << "New price of preparate ";
				cout << Medicine[i].getname() << " = " << Medicine[i].getprice() << endl;
			}


		}
	}
};


