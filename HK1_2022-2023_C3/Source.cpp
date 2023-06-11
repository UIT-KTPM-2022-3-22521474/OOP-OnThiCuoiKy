#include <iostream>
#include <string>
using namespace std;

class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	void Nhap();
	bool isNhuan();
	bool isHopLe();
	void Xuat();
};
class CCuaHang
{
protected:
	int SoHoaDon;
	CHoaDon* hd[100];
public:
	void Nhap();
	void TopKhachHang();
	void Xuat();
};
class CHoaDon
{
protected:
	string MaHoaDon;
	long MaKhachHang;
	string TenKhachHang;
	string SoDienThoai;
	int SoSanPham;
	CSanPham* sp[100];
public:
	void Nhap();
	int ThuNhap();
	void TimKiem();
	void Xuat();
};
class CSanPham
{
protected:
	long MaSo;
	string TieuDe;
	int GiaBan;
public:
	virtual void Nhap();
	virtual int TinhTien();
	virtual void Xuat();
};
class CTranhAnh :public CSanPham
{
protected:
	int ChieuRong;
	int ChieuCao;
	string HoTen;
public:
	void Nhap();
	int TinhTien();
	void Xuat();
};
class CCD :public CSanPham
{
protected:
	string TenCaSi;
	string TenDVSX;
public:
	void Nhap();
	int TinhTien();
	void Xuat();
};

int main()
{

}

void CNgay::Nhap()
{
	cout << "\nNhap ngay:	";
	cin >> Ngay;
	cout << "Nhap thang:	";
	cin >> Thang;
	cout << "Nhap nam:	";
	cin >> Nam;
}

bool CNgay::isNhuan()
{
	if (((Nam % 4 == 0) && (Nam % 100 != 0)) || (Nam % 400 == 0))
		return true;
	else
		return false;
}

bool CNgay::isHopLe()
{
	bool flag = true;
	if (Nam < 0)
	{
		flag = false;
		return flag;
	}
	if (Thang < 1 || Thang > 12)
	{
		flag = false;
		return flag;
	}
	switch (Thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	{
		if (Ngay > 31 || Ngay < 1)
			flag = false;
		break;
	}
	case 4: case 6: case 9: case 11:
	{
		if (Ngay > 30 || Ngay < 1)
			flag = false;
		break;
	}
	case 2:
	{
		if (isNhuan() == true)
		{
			if (Ngay > 29 || Ngay < 1)
				flag = false;
		}
		else
		{
			if (Ngay > 28 || Ngay < 1)
				flag = false;
		}
		break;
	}
	}
	return flag;
}

void CNgay::Xuat()
{
	if (Ngay < 10)
		to_string(Ngay) = '0' + Ngay;
	if (Thang < 10)
		to_string(Thang) = '0' + Thang;
	cout << Ngay << "/" << Thang << "/" << Nam;
}

void CCuaHang::Nhap()
{
	cout << "\nNhap so luong hoa don:	";
	cin >> SoHoaDon;
	for (int i = 0; i < SoHoaDon; i++)
	{
		cout << "\nNhap hoa don thu " << i + 1 << ":	";
		hd[i] = new CHoaDon;
		hd[i]->Nhap();
	}
}

void CCuaHang::Xuat()
{
	cout << "\nSo luong hoa don cua cua hang la:	" << SoHoaDon << ".";
	for (int i = 0; i < SoHoaDon; i++)
	{
		cout << "\nHoa don thu " << (i + 1) << ":"<< endl;
		hd[i]->Xuat();
	}
}

void CHoaDon::Nhap()
{
	cout << "\nNhap ma hoa don: ";
	cin.ignore();
	getline(cin, MaHoaDon);
	cout << "Nhap ma khach hang: ";
	cin >> MaKhachHang;
	cout << "Nhap ten khach hang: ";
	cin.ignore();
	getline(cin, TenKhachHang);
	cout << "Nhap so dien thoai: ";
	getline(cin, SoDienThoai);
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
	for (int i = 0; i < SoSanPham; i++)
	{
		int loaiSanPham;
		cout << "Nhap loai san pham (1. Tranh anh, 2. CD Nhac):	";
		cin >> loaiSanPham;
		if (loaiSanPham == 1)
			sp[i] = new CTranhAnh();
		else if (loaiSanPham == 2)
			sp[i] = new CCD();
		else
		{
			cout << "Loai san pham khong hop le." << endl;
			i--;
			continue;
		}
		sp[i]->Nhap();
	}
}

int CHoaDon::ThuNhap()
{
	int income = 0;
	for (int i = 0; i < SoSanPham; i++)
	{
		income += sp[i]->TinhTien();
	}
	return income;
}

void CHoaDon::Xuat()
{
	cout << "\nMa hoa don: " << MaHoaDon << "." << endl;
	cout << "Ma khach hang: " << MaKhachHang << "." << endl;
	cout << "Ten khach hang: " << TenKhachHang << "." << endl;
	cout << "So dien thoai: " << SoDienThoai << "." << endl;
	cout << "So san pham: " << SoSanPham << "." << endl;
	cout << "Danh sach san pham: " << endl;
	for (CSanPham* SanPham : sp)
	{
		SanPham->Xuat();
	}
	cout << "Thu nhap: " << ThuNhap() << "." << endl;
}

void CSanPham::Nhap()
{
	cout << "\nNhap ma so san pham: ";
	cin >> MaSo;
	cout << "Nhap tieu de san pham: ";
	cin.ignore();
	getline(cin, TieuDe);
	cout << "Nhap gia ban san pham: ";
	cin >> GiaBan;
}

int CSanPham::TinhTien()
{
	return 0;
}



void CSanPham::Xuat()
{
	cout << "\nMa so san pham: " << MaSo << "." << endl;
	cout << "Tieu de san pham: " << TieuDe << "." << endl;
	cout << "Gia ban san pham: " << GiaBan << "." << endl;
}

void CTranhAnh::Nhap()
{
	CSanPham::Nhap();
	cout << "Nhap chieu rong buc tranh: ";
	cin >> ChieuRong;
	cout << "Nhap chieu cao buc tranh: ";
	cin >> ChieuCao;
	cout << "Nhap ho ten hoa si: ";
	cin.ignore();
	getline(cin, HoTen);
}

int CTranhAnh::TinhTien()
{
	return GiaBan;
}

void CTranhAnh::Xuat()
{
	CSanPham::Xuat();
	cout << "Chieu rong buc tranh: " << ChieuRong << "." << endl;
	cout << "Chieu cao buc tranh: " << ChieuCao << "." << endl;
	cout << "Ho ten hoa si: " << HoTen << "." << endl;
}

void CCD::Nhap()
{
	CSanPham::Nhap();
	cout << "Nhap ten ca si: ";
	cin.ignore();
	getline(cin, TenCaSi);
	cout << "Nhap ten don vi san xuat: ";
	getline(cin, TenDVSX);
}

int CCD::TinhTien()
{
	return GiaBan;
}

void CCD::Xuat()
{
	CSanPham::Xuat();
	cout << "Ten ca si: " << TenCaSi << "." << endl;
	cout << "Ten don vi san xuat: " << TenDVSX << "." << endl;
}