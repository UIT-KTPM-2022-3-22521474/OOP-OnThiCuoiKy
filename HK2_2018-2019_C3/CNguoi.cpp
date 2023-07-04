#include "CNguoi.h"

void CNguoi::Nhap()
{
	cout << "Nhap ho va ten nguoi tham gia: ";	
	cin.ignore();
	getline(cin, HoTen);
	ds[0] = new CChiSoO;
	ds[1] = new CChiSoC;
	ds[2] = new CChiSoE;
	ds[3] = new CChiSoA;
	ds[4] = new CChiSoN;
	for (int i = 0; i < 5; i++)			
		ds[i]->Nhap();
}

bool CNguoi::RuiRo()
{
	if (ds[1]->LayChiSo() <= 30)
		return true;
	if (ds[4]->LayChiSo() >= 70)
		return true;
	if ((ds[2]->LayChiSo() < 30) && (ds[4]->LayChiSo() >= 70))
		return true;
	return false;
}

void CNguoi::Xuat()
{
	cout << "\nHo va ten nguoi tham gia:	" << HoTen << "." << endl;
	cout << "\nBigFive: O" << ds[1]->LayChiSo() << "-C" << ds[2]->LayChiSo() << "-E" << ds[3]->LayChiSo() << "-A" << ds[4]->LayChiSo() << "-N" << ds[5]->LayChiSo() << "." << endl;
	for (int i = 0; i < 5; i++)
		ds[i]->Xuat();
}

string CNguoi::getHoTen()
{
	return HoTen;
}