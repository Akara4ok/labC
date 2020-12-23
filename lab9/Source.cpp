#include <iostream>
#include <vector>
#include <string>
#include "myLib.h"
using namespace std;

int main()
{
	string s;
	int k;
	vector<string> words;
	cin >> k;
	cin.ignore();
	getline(cin, s);
	words = split(s);
	cout << count(words, k);
	return 0;
}