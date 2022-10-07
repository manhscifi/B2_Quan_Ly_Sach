#include"TaiLieu.h"

TaiLieu::TaiLieu(string id, string nxb, int sobanph)
{
	_id = id;
	_nxb = nxb;
	_sobanph = sobanph;
}

void TaiLieu::displayTL()
{
	cout << "ID: " << _id << endl;
	cout << "Nha xuat ban: " << _nxb << endl;
	cout << "So ban phat hanh: " << _sobanph << endl;
}

string TaiLieu::getID()
{
	return _id;
}
