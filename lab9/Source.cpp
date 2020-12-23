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
	split(s, words);
	res(words, k);
	return 0;
}