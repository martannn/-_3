#include <iostream>
#include "medicine.h"
#include "MedMas.h"
#include "Windows.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukr");
	cout << "Кiлькiсть видiв  лiкiв:";
	int j; cin >> j;
	cout << "-------------------------------------------------" << endl;
	MedMas prep(j);
	prep.MedFill();
	cout << "-------------------------------------------------" << endl;
	cout << "Меню" << endl;
	int to_continue = 1;
	while (to_continue == 1) {
		cout << "1)Купити за рецептом" << endl;
		cout << "2)Пошук за назвою" << endl;
		cout << "3)Пошук за кiлькiстю " << endl;
		cout << "4)Пошук за цiною " << endl;
		cout << "5)Змiнити кiлькiсть лiкiв " << endl;
		cout << "6)Змiнити вартiсть лiкiв" << endl;
		cout << "7)Купити за рецептом(переповнення)" << endl;
		cout << "8)Пошук за назвою(переповнення)" << endl;

		int choose; cin >> choose;
		if (choose == 1) {
			cout << "Введіть свій рецепт:" << endl;
			cout << "це буде коштуватиме: " << prep.Recept() << endl;
		}
		if (choose == 2) {
			cout << "Введiть назву лiкiв,якi  потрібно знайти:";
			string str;
			cin >> str;
			prep.FindName(str);
		}
		if (choose == 3) {
			cout << "Введiть кiлькiсть для пошуку:";
			int find;
			cin >> find;
			prep.FindCount(find);
		}
		if (choose == 4) {
			cout << "Введять цiну для пошуку:";
			int find;
			cin >> find;
			prep.FindCost(find);
		}
		if (choose == 5) {
			cout << "Збiльшити чи зменшити?\n 1-Збiльшити\n 2-Зменшити" << endl;
			int ch;
			cin >> ch;
			if (ch == 1)
			{
				cout << "Введiть назву лiкiв:"; string str; cin >> str;
				cout << "Введiть на скiльки збiльшити:"; int t; cin >> t;
				prep.IncCount(str, t);
			}
			if (ch == 2) {
				cout << "Введiть назву лiкiв:"; string str; cin >> str;
				cout << "Введiть на скiльки зменшити :"; int t; cin >> t;
				prep.RedCount(str, t);
			}
		}
		if (choose == 6) {
			cout << "Збiльшити чи зменшити?\n 1-Збiльшити\n 2-Зменшити" << endl;
			int ch; cin >> ch;
			if (ch == 1) {
				cout << "Введiть назву лiкiв:";
				string str;
				cin >> str;
				cout << "Введiть на скiльки збiльшити :";
				int t;
				cin >> t;
				prep.IncCost(str, t);
			}
			if (ch == 2) {
				cout << "Введiть назву лiкiв:";
				string str;
				cin >> str;
				cout << "Введiть на скiльки зменшити ";
				int t;
				cin >> t;
				prep.RedCost(str, t);
			}
		}
		if (choose == 7) {
			int COST = 0;
			for (int i = 0; i < j; i++)
			{
				cout << "кiлькiсть лiкiв " << i + 1 << " = ";
				int p1;
				cin >> p1;
				COST += prep.Recept(p1, i);

			}
			cout << "коштуватиме за новим рецептом = " << COST << endl;
		}
		if (choose == 8) {

			prep.FindName();

		}



		else {
			cout << endl;
			continue;
		}
	}


	system("pause");
	return 0;
}

