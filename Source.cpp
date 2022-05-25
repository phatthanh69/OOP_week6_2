#include "cBo.h"
#include "cCuu.h"
#include "cDe.h"

int main() {
	srand(time(NULL));
	vector<cGiaSuc*> nongtrai;
	for (int i = 0; i < 10; i++) {
		int random = rand() % 3;
		switch (random)
		{
		case 0:
			nongtrai.push_back(new cBo);
		case 1:
			nongtrai.push_back(new cCuu);
		case 2:
			nongtrai.push_back(new cDe);
		default:
			break;
		}
	}
	int sl = nongtrai.size();
	for (int i = 0; i < sl; i++) nongtrai[i]->Keu();
	for (int i = 0; i < sl; i++)
	{
		vector<cGiaSuc*> t = nongtrai[i]->SinhCon();
		for (int j = 0; j < (int)t.size(); j++)
			nongtrai.push_back(t[j]);
	}
	cout << "So luong gia suc trong nong trai sau khi sinh con la: " << nongtrai.size() << "\n";
	int sua = 0;
	for (int i = 0; i < sl; i++)
		sua += nongtrai[i]->ChoSua();
	cout << "Tong sua: " << sua << " lit" << "\n" << "Cac gia suc trong nong trai:" << "\n";
	int conBo = 0, conCuu = 0, conDe = 0;
	for (int i = 0; i < sl; i++)
	{

		if (nongtrai[i]->TenLoai() == "Bo") conBo++;
		else if (nongtrai[i]->TenLoai() == "Cuu") conCuu++;
		else conDe++;
	}
	cout << "Bo: " << conBo << "\n";
	cout << "Cuu: " << conCuu << "\n";
	cout << "De: " << conDe << "\n";
	system("pause");
	return 0;
}