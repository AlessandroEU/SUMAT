#include <iostream>
#include <cstdlib>
using namespace std;
/*
Bondarenko Alex
Group COI-21-1
Exercise #3
*/
int main()
{
	setlocale(LC_ALL, "ru");
	int suma, a, b, r;
	cout << "������� 1 �����" << endl;
	cin >> a;
	cout << "������� 2 �����" << endl;
	cin >> b;
	r = a + b;
	r = abs(r);
	cout << "��������� " << r << endl;
	return 0;
}