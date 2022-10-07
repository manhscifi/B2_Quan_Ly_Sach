#pragma once
#include"TaiLieu.h"
#include"Sach.h"
#include"TaiLieu.h"
#include"Bao.h"
#include"TapChi.h"
#include<string>
#include<unordered_map>


class QuanLySach
{
private:
	unordered_map<string, TaiLieu*> DanhSachTaiLieu;

public:

	void addTL(string id, TaiLieu*& tl);
	void displayDS();
	void deletebyID();
	void searchbyCat();
	int initMenu();
	TaiLieu*& insert();
	void esc();
};
