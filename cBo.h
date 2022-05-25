#pragma once
#include "cGiaSuc.h"
class cBo :
    public cGiaSuc
{public:
cBo(void);
~cBo(void);
void Keu(void);
int ChoSua(void);
vector<cGiaSuc*> SinhCon(void);
string TenLoai(void);
};

