#include <iostream>

using namespace std;

int main() {
	int a;
	double y2, y1;
	double e;
	double res;

	cout << "a = "; cin >> a;
	if (a >= 0) {
		y1 = 0;
		y2 = 1;
		e = pow(10, -4);
		while (abs(y2 - y1) >= e) {
			y1 = y2;
			y2 = (y1 + (a / y1)) / 2;
		}
		res = y2;
		printf("res = %.5f", res);
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}
