#include <iostream>
using namespace std;
int main()
{
	int n, x, y, z, i;
	cin >> n;
	x = y = 1;
	cout << x << ' ';
	if (n > 1)
	{
		cout << y << ' ';
	}
	for (i = 3; i <= n; i++)
	{
		z = x+y;
		cout << z << ' ';
		x = y, y = z;
	}
	return 0;
}
