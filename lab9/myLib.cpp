#include <vector>
#include <string>
#include "myLib.h"

using namespace std;

vector<string> split(string s)
{
	vector<string> res;
	int next, pos;
	pos = 0;
	next = 0;
	while (next != s.npos)
	{
		next = s.find(' ', pos);
		if (next != pos)
			res.push_back(s.substr(pos, next - pos));
		pos = next + 1;
	}
	return res;
}

int count(vector<string> words, int k)
{
	int res;
	res = 0;
	for (int i = 0; i < words.size(); ++i)
	{
		if (words[i].length() < k)
		{
			++res;
		}
	}
	return res;
}