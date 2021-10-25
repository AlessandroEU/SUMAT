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
	int suma, a, b, r;
	cout << "Enter 1 number" << endl;
	cin >> a;
	cout << "Enter 2 number" << endl;
	cin >> b;
	r = a + b;
	r = abs(r);
	cout << "Result " << r << endl;
	return 0;
}