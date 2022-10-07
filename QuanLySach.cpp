#include"QuanLySach.h"
#include<algorithm>

void QuanLySach::addTL(string id, TaiLieu*& tl)
{
	DanhSachTaiLieu.insert({ id, tl });
}

void  QuanLySach::deletebyID()
{
	string id;
	cout << "Nhap ID can xoa: ";
	cin.ignore();
	getline(cin, id);
	for (auto i = DanhSachTaiLieu.begin(); i != DanhSachTaiLieu.end(); i++)
	{
		string _id = i->first;
		if (_id == id)
		{
			DanhSachTaiLieu.erase(DanhSachTaiLieu.find(id));
			cout << "Da xoa.\n";
			break;
		}
	}
}

void QuanLySach::displayDS()
{
	if (DanhSachTaiLieu.size() == 0)
	{
		cout << "Danh sach rong\n\n";
	}
	else
	{
		int count = 1;
		for (auto i = DanhSachTaiLieu.begin(); i != DanhSachTaiLieu.end(); i++)
		{
			cout << "STT: " << count << endl;
			cout << "Phan loai: " << i->second->getCat() << endl;
			i->second->displayTL();
			count++;
		}
		cout << "\n\n";
	}
}

void QuanLySach::searchbyCat()
{
	string cat;
	cout << "Nhap phan loai: ";
	cin.ignore();
	getline(cin, cat);
	transform(cat.begin(), cat.end(), cat.begin(), ::tolower);
	int count = 1, c = 0;
	for (auto i = DanhSachTaiLieu.begin(); i != DanhSachTaiLieu.end(); i++)
	{
		string _cat = i->second->getCat();
		if (_cat == cat)
		{
			cout << "STT: " << count << endl;
			i->second->displayTL();
			c++;
		}
		count++;
	}
	if (!c)
	{
		cout << "Khong phan loai " << cat << endl;
	}
	cout << "\n";
}

int QuanLySach::initMenu()
{
	char choice;
	cout << "QUAN LY TAI LIEU\n";
	cout << "Enter 1: Them tai lieu\n";
	cout << "Enter 2: Xoa tai lieu theo ID\n";
	cout << "Enter 3: Hien thong tin tai lieu\n";
	cout << "Enter 4: Tim theo phan loai\n";
	cout << "Enter 5: Thoat\n\n";
	cin >> choice;
	return choice;
}

TaiLieu*& QuanLySach::insert()
{
	char s;
	cout << "THEM TAI LIEU\n";
	cout << "Enter a: Them SACH\n";
	cout << "Enter b: Them TAP CHI\n";
	cout << "Enter c: Them BAO\n\n";
	cin >> s;
	string id, nxb, tacgia, soph;
	int sobanph, ngay, thang, nam, page, thangph;

	static TaiLieu* tl=NULL;
	switch (s)
	{
	case 'a':
		cout << "Enter ID: "; cin.ignore(); getline(cin, id);
		cout << "Enter NXB: "; cin.ignore(); getline(cin, nxb);
		cout << "Enter SO BAN PHAT HANH: "; cin >> sobanph;
		cout << "Enter TAC GIA: "; cin.ignore(); getline(cin, tacgia);
		cout << "Enter SO TRANG: "; cin >> page;
		tl = new Sach(id, nxb, sobanph, tacgia, page);
		cout << "\n";
		break;
	case 'b':
		cout << "Enter ID: "; cin.ignore(); getline(cin, id);
		cout << "Enter NXB: "; cin.ignore(); getline(cin, nxb);
		cout << "Enter SO BAN PHAT HANH: "; cin >> sobanph;
		cout << "Enter THANG PHAT HANH: "; cin >> thangph;
		cout << "Enter SO PHAT HANH:  "; cin.ignore(); getline(cin, soph);
		tl = new TapChi(id, nxb, sobanph, thangph, soph);
		cout << "\n";
		break;
	case 'c':
		cout << "Enter ID: "; cin.ignore(); getline(cin, id);
		cout << "Enter NXB: "; cin.ignore(); getline(cin, nxb);
		cout << "Enter SO BAN PHAT HANH: "; cin >> sobanph;;
		cout << "Enter NGAY PHAT HANH: "; cin >> ngay >> thang >> nam;
		tl = new Bao(id, nxb, sobanph, ngay, thang, nam);
		cout << "\n";
		break;
	default:
		cout << "Invalid." << endl;
		break;
	}
	return tl;
}


void QuanLySach::esc()
{
	exit(0);
}