#pragma once
#include "cGiaSuc.h"
class cDe :
    public cGiaSuc
{public:
	cDe(void);
	~cDe(void);
	void Keu(void);
	int ChoSua(void);
	vector<cGiaSuc*> SinhCon(void);
	string TenLoai(void);
};

