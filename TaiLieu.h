#pragma once
#include<iostream>
using namespace std;

class TaiLieu
{
private:
	string _id;
	string _nxb;
	int _sobanph;
public:
	TaiLieu(string id, string nxb, int sobanph);
	virtual void displayTL();
	virtual string getCat() { return ""; }
	string getID();
	virtual ~TaiLieu() {}
};


