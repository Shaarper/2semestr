#include "Comp.h"
#include <iostream>
#include <string>

using namespace std;

Comp::Comp()
{
	CPU = "";
	VolumeOP = 0;
	VolumeJD = 0;
	cout << "����������� ��� ���������� ��� ������� " << this << endl;
}

Comp::Comp(string C, int O, int J) 
{
	CPU = C;
	VolumeOP = O;
	VolumeJD = J;
	cout << "����������� � ����������� ��� ������� " << this << endl;
}

Comp::Comp(const Comp& t)
{
	CPU = t.CPU;
	VolumeOP = t.VolumeOP;
	VolumeJD = t.VolumeJD;
	cout << "����������� ����������� ��� ������� " << this << endl;
}

Comp::~Comp() 
{
	cout << "������������� ��� �������" << this << endl;
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