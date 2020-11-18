#include <iostream>

using namespace std;

int main() {
	int n;
	double x1, x2,x3;

	cout << "n = "; cin >> n;
	
	x1 = 1;
	cout << "x1 = " << x1 << endl;

	if (n >= 2) 
	{
		x2 = 0.3;
		cout << "x2 = " << x2 << endl;
	}

	for (int i = 3; i <= n; ++i)
	{
		x3 = (i + 1) * x1;
		cout << "x" << i << " = " << x3 << endl;
		x1 = x2;
		x2 = x3;
	}
 	return 0;
}
