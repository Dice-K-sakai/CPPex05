#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	bool OK_Size;
	BOX box;

	while (true)
	{
		cout << "幅を入力：";
		cin >> box.x;
		cout << "高さを入力：";
		cin >> box.y;
		cout << "奥行を入力：";
		cin >> box.z;

		if (box.x <= 0 || box.y <= 0 || box.z <= 0)
		{
			cout << endl << "この数値は入力できません。" << endl << "もう一度確認し、入力し直してください。" << endl << endl;
		}
		else
		{
			break;
		}
	}

	OK_Size = isSendable(&box);

	if (OK_Size == true)
	{
		cout << endl << box.packSize << "サイズで送れます。" << endl;
	}
	else
	{
		cout << endl << "宅急便では送れません" << endl;
	}

	return 0;
}