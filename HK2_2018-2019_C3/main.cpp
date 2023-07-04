#include <iostream>
#include <string>
using namespace std;
#include "CTuyenDung.h"

int main()
{
	CTuyenDung hr{};
	hr.Nhap();
	hr.Xuat();
	cout << "\nNhap ho va ten nguoi tham gia can tim:	";
	string hoten;
	getline(cin, hoten);
	cin.ignore();
	CNguoi* kq = hr.TimKiem(hoten);
	if (kq == NULL)
		cout << "Khong tim thay nguoi tham gia co ho va ten tren.";
	else
		kq->Xuat();
	hr.XuatdsRuiRo();
	return 0;
}