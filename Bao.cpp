#include"Bao.h"

Bao::Bao(string id, string nxb, int sobanph, int ngay, int thang, int nam) : TaiLieu(id, nxb, sobanph)
{
	_ngay = ngay;
	_thang = thang;
	_nam = nam;
}

void Bao::displayTL()
{
	TaiLieu::displayTL();
	cout << "Ngay phat hanh: " << _ngay << "." << _thang << "." << _nam << endl;
}

string Bao::getCat()
{
	return cat;
}