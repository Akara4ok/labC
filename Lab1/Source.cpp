#include <iostream>

using namespace std;

int main() {
	int n;
	int n1;

	cout << "n = "; cin >> n;
	
	if (n > 0) {
		n1 = n / 100;
		n = (n % 100) * 10 +n1;
	}
	else {
		n1 = (-1) * n / 100;
		n = (-1) * ((((-1) * n) % 100) * 10 + n1);
	}
	cout << "res = " << n;

	return 0;
}
