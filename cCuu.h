#pragma once
#include "cGiaSuc.h"
class cCuu :
	public cGiaSuc
{
public:
	cCuu(void);
	~cCuu(void);
	void Keu(void);
	int ChoSua(void);
	vector<cGiaSuc*> SinhCon(void);
	string TenLoai(void);
};

