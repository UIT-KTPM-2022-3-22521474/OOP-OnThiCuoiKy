#pragma once
#include <iostream>
using namespace std;
#include "CNguoi.h"
#include "CChiSo.h"

class CTuyenDung
{
protected:
	int n;
	CNguoi* ds[100];
public:
	void Nhap();
	void XuatdsRuiRo();
	void Xuat();
	CNguoi* TimKiem(string);
};