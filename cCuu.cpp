#include "cCuu.h"

cCuu::cCuu(void)
{
	chonloaigs = 2;
}

cCuu::~cCuu(void)
{
}

void cCuu::Keu(void)
{
	cout << "Beeeee"<<"\n";
}

int cCuu::ChoSua(void)
{
	return rand() % 6;
}

vector<cGiaSuc*> cCuu::SinhCon(void)
{
	int socon = 1 + rand() % 8;
	vector<cGiaSuc*> con;
	for (int i = 0; i < socon; i++) con.push_back(new cCuu());
	return con;
}

string cCuu::TenLoai(void)
{
	return "Cuu";
}
