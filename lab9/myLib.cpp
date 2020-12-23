#include <vector>
#include <iostream>
#include <string>
#include "myLib.h"

using namespace std;

void split(string s, vector<string>&words)
{
	int next, pos;
	pos = 0;
	next = 0;
	while (next != s.npos)
	{
		next = s.find(' ', pos);
		if (next != pos)
			words.push_back(s.substr(pos, next - pos));
		pos = next + 1;
	}
}

void res(vector<string> words, int k)
{
	int res;
	res = 0;
	for (int i = 0; i < words.size(); ++i)
	{
		if (words[i].length() < k)
		{
			cout << words[i] << " ";
		}
	}
}