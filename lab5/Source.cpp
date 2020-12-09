#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, s;
	for (int i = 100; i <= 999; ++i)
	{
		n = i;
		s = 0;
		while (n > 0)
		{
			s = s + pow((n % 10), 3);
			n = n / 10;
		}
		if (s == i)
		{
			cout << i << endl;
 		}
	}
	return 0;
}
