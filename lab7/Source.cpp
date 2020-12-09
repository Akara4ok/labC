#include <iostream>
#include <Math.h>
#include <ctime>
#include <iomanip>


using namespace std;

void input(float*, int, int, int);
void change(float*, int, int);
void output(float*, int);

int main()
{
	int n;
	int t, e;
	
	t = 500;
	e = 3;

	cin >> n;
	float* p = new float[n];

	input(p, n, t, e);
	change(p, n, e);
	output(p, n);

	delete[] p;
	
	return 0;
}

void input(float* p, int n, int t, int e)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		p[i] = rand() % (2*t + 1) - t;
		p[i] = p[i] + (rand() % (int)(pow(10, e))) / (pow(10,e));
		cout << setw(8) << p[i] << " ";
	}
	cout << endl;
}

void change(float*p, int n, int e)
{
	int s, a;

	for (int i = 0; i < n; ++i)
	{
		s = 0;
		if (p[i] < 0)
		{
			a = abs(p[i] * ((int)pow(10, e)));
			for (int j = 0; j < e; ++j)
			{
				s = s + a % 10;
				a = a / 10;
			}
			p[i] = s;
		}
	}
}

void output(float* p, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << setw(8) << p[i] << " ";
	}
	cout << endl;
}