#include <iostream>

using namespace std;

int main() {
	int r, s, a, b;
	int c;
	cout << "r = "; cin >> r;
	cout << "s = "; cin >> s;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	if ((a >= 0) && (b > 0)) {
		c = a % b;
		if (c == r){
			cout << "Yes";
		}
		else {
			if (c == s) {
				cout << "Yes";
			}
			else {
				cout << "No";
			}
		}
	}
	else {
		cout << "Error";
	}
	return 0;
}
