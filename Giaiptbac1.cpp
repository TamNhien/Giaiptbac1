#include <iostream>
using namespace std;
int main()
{
	int a, b;
	float x;
	cout << " Ung dung giai phuong trinh bac I\n";
	cout << " Nhap a : "; cin >> a;
	cout << " Nhap b : "; cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << " Phuong trinh dung voi moi x";
		}
		else {
			cout << " Phuong trinh vo nghiem\n";
		}
	}
	else
	{
		x = (float)-b / a;
		cout << " Ket qua x = " << x << endl;
	}
	return 0;
}