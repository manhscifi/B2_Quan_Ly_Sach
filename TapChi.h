#pragma once
#include"TaiLieu.h"

class TapChi :public TaiLieu
{
private:
	string cat = "tap chi";
	//tháng phát hành, số phát hành
	int _thangph;
	string _soph;
public:
	TapChi(string id, string nxb, int sobanph, int thangph, string soph);
	string getCat();
	void displayTL();
	virtual ~TapChi() {}
};

