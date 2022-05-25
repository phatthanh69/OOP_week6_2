#include "cDe.h"

cDe::cDe(void)
{
	chonloaigs = 3;
}

cDe::~cDe(void)
{
}

void cDe::Keu(void)
{
	cout << "Deeeee"<<"\n";
}

int cDe::ChoSua(void)
{
	return rand() % 11;
}

vector<cGiaSuc*> cDe::SinhCon(void)
{
	int socon = 1 + rand() % 8;
	vector<cGiaSuc*> con;
	for (int i = 0; i < socon; i++) con.push_back(new cDe());
	return con;
}

string cDe::TenLoai(void)
{
	return "De";
}
