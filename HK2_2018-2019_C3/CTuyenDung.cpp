#include "CTuyenDung.h"

void CTuyenDung::Nhap()
{
	cout << "Nhap so luong nguoi tham gia:	";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin nguoi thu " << i + 1 << " :" << endl;
		ds[i] = new CNguoi;
		ds[i]->Nhap();
	}
}

void CTuyenDung::XuatdsRuiRo()
{
	cout << "\n\nDanh sach nhung nguoi co nguy co cao can luu y:" << endl;
	for (int i = 0; i < n; i++)
		if (ds[i]->RuiRo() == true)
			ds[i]->Xuat();
}

void CTuyenDung::Xuat()
{
	cout << "\nDanh sach nguoi tham gia:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin nguoi tham gia thu " << i + 1 << " :" << endl;
		ds[i]->Xuat();
	}
}

CNguoi* CTuyenDung::TimKiem(string HoTen)
{
	for (int i = 0; i < n; i++)
		if (HoTen == ds[i]->getHoTen())
			return ds[i];
	return NULL;
}