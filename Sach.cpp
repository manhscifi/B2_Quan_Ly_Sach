#include"Sach.h"

Sach::Sach(string id, string nxb, int sobanph, string tacgia, int page) : TaiLieu(id, nxb, sobanph)
{
	_tacgia = tacgia;
	_page = page;
}

void Sach::displayTL()
{
	TaiLieu::displayTL();
	cout << "Tac gia: " << _tacgia << endl;
	cout << "So trang: " << _page << endl;
}

string Sach::getCat()
{
	return cat;
}