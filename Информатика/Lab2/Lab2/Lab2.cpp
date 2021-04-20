#include <iostream>
#include <string>
#include <Windows.h>
#include "Comp.h"

using namespace std;

Comp make_Comp()
{
	string C;
	int O, J;
	cout << "Введение параметров вручную (без пробелов):"<<endl;
	cout << "Введите CPU: ";
	cin >> C;
	cout << "\nВведите ОбъемОП: ";
	cin >> O;
	cout << "\nВведите ОбъемЖД (Указать  в ТБ): ";
	cin >> J;
	Comp t(C, O, J);
	return t;
}

void print_comp(Comp t)
{
	t.snow();
}
void main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Comp t1;
	t1.snow();

	Comp t2("AMD", 16, 2);
	t2.snow();

	Comp t3 = t2;
	t3.set_CPU("Intel");
	t3.set_VolumeOP(8);
	t3.set_VolumeJD(1);
	print_comp(t3);
	t1 = make_Comp();
	t1.snow();
}