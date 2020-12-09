#include <iostream>

using namespace std;

int GCD(int, int);

int main() {
	int n, i, m;

	cout << "n = "; cin >> n;
	cout << "i = "; cin >> i;
	cout << "m = "; cin >> m;

	cout << "GCD = " << GCD(n, GCD(i,m));
}

int GCD(int a, int b){
	return (b == 0) ? a : GCD(b, a % b);	
}