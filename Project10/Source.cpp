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
	cout << "¬ведите 1 число" << endl;
	cin >> a;
	cout << "¬ведите 2 число" << endl;
	cin >> b;
	r = a + b;
	r = abs(r);
	cout << "–езультат " << r << endl;
	return 0;
}