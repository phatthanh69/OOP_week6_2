#include "cBo.h"

cBo::cBo(void)
{
	chonloaigs = 1;
}

cBo::~cBo(void)
{
}

void cBo::Keu(void)
{
	cout << "Um bo" << "\n";
}

int cBo::ChoSua(void)
{
	return rand() % 21;
}

vector<cGiaSuc*> cBo::SinhCon(void)
{
	int socon = 1 + rand() % 8;
	vector<cGiaSuc*> con;
	for (int i = 0; i < socon; i++) con.push_back(new cBo());
	return con;
}

string cBo::TenLoai(void)
{
	return "Bo";
}
