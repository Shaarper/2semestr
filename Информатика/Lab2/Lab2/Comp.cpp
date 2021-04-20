#include "Comp.h"
#include <iostream>
#include <string>

using namespace std;

Comp::Comp()
{
	CPU = "";
	VolumeOP = 0;
	VolumeJD = 0;
	cout << "Конструктор без параметров для объекта " << this << endl;
}

Comp::Comp(string C, int O, int J) 
{
	CPU = C;
	VolumeOP = O;
	VolumeJD = J;
	cout << "Конструктор с параметрами для объекта " << this << endl;
}

Comp::Comp(const Comp& t)
{
	CPU = t.CPU;
	VolumeOP = t.VolumeOP;
	VolumeJD = t.VolumeJD;
	cout << "Конструктор копирования для объекта " << this << endl;
}

Comp::~Comp() 
{
	cout << "Деконструктор для объекта" << this << endl;
}

string Comp::get_CPU()
{
	return CPU;
}

int Comp::get_VolumeOP()
{
	return VolumeOP;
}

int Comp::get_VolumeJD()
{
	return VolumeJD;
}

void Comp::set_CPU(string C)
{
	CPU = C;
}

void Comp::set_VolumeOP(int O)
{
	VolumeOP = O;
}

void Comp::set_VolumeJD(int J)
{
	VolumeJD = J;
}

void Comp::snow()
{
	cout << "CPU : " << CPU << endl;
	cout << "VolumeOP : " << VolumeOP << endl;
	cout << "VolumeJD : " << VolumeJD << endl;
}