#include "CChiSo.h"

void CChiSo::Nhap()
{
	return;
}

int CChiSo::LayChiSo()
{
	return 0;
}

void CChiSo::Xuat()
{
	return;
}

void CChiSoO::Nhap()
{
	cout << "Nhap chi so O (Openness to Experience - San sang trai nghiem):	";
	cin >> ChiSo;
}

int CChiSoO::LayChiSo()
{
	return ChiSo;
}

void CChiSoO::Xuat()
{
	cout << "Chi so O (Openness to Experience - San sang trai nghiem):	" << ChiSo << "." << endl;
	if (ChiSo >= 70)
	{
		cout << "\nChi so O cao - Nguoi co diem cao o yeu to nay thuong la nhung nguoi thich nhung y tuong moi," << endl;
		cout << "thich hieu biet nhieu linh vuc nhung dong thoi cung thich tu do, khong thich bi rang buoc." << endl;
	}
	else if (ChiSo <= 30)
	{
		cout << "\nChi so O thap - Nguoi co diem thap o yeu to nay thuong kha bao thu, kho tiep nhan nhung y tuong moi, la." << endl;
		cout << "Ho thich su on dinh, quen thuoc va thuc te.";
	}
}


void CChiSoC::Nhap()
{
	cout << "Nhap chi so C (Conscientiouness - Tu chu tan tam):	";
	cin >> ChiSo;
}

int CChiSoC::LayChiSo()
{
	return ChiSo;
}

void CChiSoC::Xuat()
{
	cout << "Chi so C (Conscientiouness - Tu chu tan tam):	" << ChiSo << "." << endl;
	if (ChiSo >= 70)
	{
		cout << "\nChi so C cao - Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap luc tot." << endl;
		cout << "Ho thuong la nhung nguoi gan bo, trung thanh voi to chuc." << endl;
	}
	else if (ChiSo <= 30)
	{
		cout << "\nChi so C thap - Nguoi co diem thap o yeu to nay thuong de bo cuoc," << endl;
		cout << "kha nang chiu ap luc, tuan thu ky luat cua to chuc kem." << endl;
	}
}


void CChiSoE::Nhap()
{
	cout << "Nhap chi so E (Extraversion - Huong ngoai):	";
	cin >> ChiSo;
}

int CChiSoE::LayChiSo()
{
	return ChiSo;
}

void CChiSoE::Xuat()
{
	cout << "Chi so E (Extraversion - Huong ngoai):	" << ChiSo << "." << endl;
	if (ChiSo >= 70)
	{
		cout << "\nChi so E cao - Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang dong," << endl;
		cout << "giao tiep tot, thich the hien ban than." << endl;
	}
	else if (ChiSo <= 30)
	{
		cout << "\nChi so E thap - Nguoi co diem thap o yeu to nay thuong ngai giao tiep," << endl;
		cout << "khong thich su noi bat, thich duoc lam viec doc lap." << endl;
	}
}


void CChiSoA::Nhap()
{
	cout << "Nhap chi so A (Agreeableness - Hoa dong):	";
	cin >> ChiSo;
}

int CChiSoA::LayChiSo()
{
	return ChiSo;
}

void CChiSoA::Xuat()
{
	cout << "Chi so A (Agreeableness - Hoa dong):	" << ChiSo << "." << endl;
	if (ChiSo >= 70)
	{
		cout << "\nChi so A cao - Nguoi co diem cao o yeu to nay thuong than thien, coi mo," << endl;
		cout << "dong cam voi moi nguoi nhung nhieu khi 'thieu chinh kien'." << endl;
	}
	else if (ChiSo <= 30)
	{
		cout << "\nChi so A thap - Nguoi co diem thap thuong dat loi ich cua ban than len tren," << endl;
		cout << "it dong cam, chia se voi dong nghiep, co tinh canh tranh cao." << endl;
	}
}

void CChiSoN::Nhap()
{
	cout << "Nhap chi so N (Neuroticism - Bat on cam xuc):	";
	cin >> ChiSo;
}

int CChiSoN::LayChiSo()
{
	return ChiSo;
}

void CChiSoN::Xuat()
{
	cout << "Chi so N (Neuroticism - Bat on cam xuc):	" << ChiSo << "." << endl;
	if (ChiSo >= 70)
	{
		cout << "\nChi so N cao - Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu:" << endl;
		cout << "lo lang, buc boi, tu ti, yeu duoi va kha nang chiu ap luc kem." << endl;
	}
	else if (ChiSo <= 30)
	{
		cout << "\nChi so N thap - Nguoi co diem thap o yeu to nay thuong kiem soat duoc cam xuc," << endl;
		cout << "ung pho duoc voi cang thang tot, it bi ben ngoai anh huong den tam trang cua ban than." << endl;
	}
}