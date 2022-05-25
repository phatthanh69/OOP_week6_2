#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
#include <vector>
#include <conio.h>
#include <time.h>
#include <string.h>
using namespace std;

class cGiaSuc
{
protected:
	int chonloaigs;
public:
	cGiaSuc(void);
	~cGiaSuc(void);
	virtual void Keu(void);
	virtual int ChoSua(void);
	virtual vector<cGiaSuc*> SinhCon(void)=0;
	int LoaiGiaSuc(void);
	virtual string TenLoai(void);
};

