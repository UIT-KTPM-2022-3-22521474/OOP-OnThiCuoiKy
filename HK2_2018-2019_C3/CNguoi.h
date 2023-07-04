#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "CChiSo.h"

class CNguoi
{
protected:
	string HoTen;
	CChiSo* ds[5];
public:
	void Nhap();
	bool RuiRo();
	void Xuat();
	string getHoTen();
};