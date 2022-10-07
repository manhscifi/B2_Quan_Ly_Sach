#pragma once
#include"TaiLieu.h"

class Sach :public TaiLieu
{
private:
	string cat = "sach";
	string _tacgia;
	int _page;
public:
	Sach(string id, string nxb, int sobanph, string tacgia, int page);
	void displayTL();
	string getCat();
	virtual ~Sach() {}
};

