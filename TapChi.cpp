#include"TapChi.h"

TapChi::TapChi(string id, string nxb, int sobanph, int thangph, string soph) : TaiLieu(id, nxb, sobanph)
{
	_thangph = thangph;
	_soph = soph;
}

void TapChi::displayTL()
{
	TaiLieu::displayTL();
	cout << "Thang phat hanh: " << _thangph << endl;
	cout << "So phat hanh: " << _soph << endl;
}

string TapChi::getCat()
{
	return cat;
}