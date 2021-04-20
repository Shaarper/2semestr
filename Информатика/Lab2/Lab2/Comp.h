#pragma once
#include <iostream>
#include <string>

using namespace std;

class Comp
{
	string CPU;
	int VolumeOP;
	int VolumeJD;
public:
	Comp();
	Comp(string, int, int);
	Comp(const Comp&);
	~Comp();
	string get_CPU();
	void set_CPU(string);
	int get_VolumeOP();
	void set_VolumeOP(int);
	int get_VolumeJD();
	void set_VolumeJD(int);
	void snow();
};