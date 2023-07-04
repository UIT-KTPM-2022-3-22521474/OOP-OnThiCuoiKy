#pragma once
#include <iostream>
using namespace std;

class CChiSo
{
protected:
	int ChiSo;
public:
	void Nhap();
	int LayChiSo();
	void Xuat();
};
class CChiSoO :public CChiSo
{
public:
	virtual void Nhap();
	virtual int LayChiSo();
	virtual void Xuat();
};
class CChiSoC :public CChiSo
{
public:
	virtual void Nhap();
	virtual int LayChiSo();
	virtual void Xuat();
};
class CChiSoE :public CChiSo
{
public:
	virtual void Nhap();
	virtual int LayChiSo();
	virtual void Xuat();
};
class CChiSoA :public CChiSo
{
public:
	virtual void Nhap();
	virtual int LayChiSo();
	virtual void Xuat();
};
class CChiSoN :public CChiSo
{
public:
	virtual void Nhap();
	virtual int LayChiSo();
	virtual void Xuat();
};