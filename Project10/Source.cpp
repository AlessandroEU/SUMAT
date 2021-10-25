#include <iostream>
#include <cstdlib>
using namespace std;
/*
Bondarenko Alex
Group COI-21-1
Exercise #3
*/
int suma(int a, int b)
{
	int r;
	r = a + b;

	return r;
}
int main()
{
	int c;
	c = suma(-9, 1);
	c = abs(c);
	cout << c << endl;


}