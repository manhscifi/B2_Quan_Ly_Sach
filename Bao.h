#pragma once
#include"TaiLieu.h"

class Bao :public TaiLieu
{
private:
	string cat = "bao";
	int _ngay;
	int _thang;
	int _nam;
public:
	Bao(string id, string nxb, int sobanph, int ngay, int thang, int nam);
	void displayTL();
	string getCat();
	virtual ~Bao() {}
};


