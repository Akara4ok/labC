#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void input(int**, int, int);
void outputMatrix(int**, int);
bool zero(int**, int, int);
void change(int**, int);
void deleteMatrix(int**, int);

int main()
{
	int n;
	int range;
	range = 1;
	cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		matrix[i] = new int[n];
	}
	input(matrix, n, range);
	outputMatrix(matrix, n);
	change(matrix, n);
	outputMatrix(matrix, n);
	deleteMatrix(matrix, n);
	return 0;
}

void input(int** matrix, int n, int range)
{
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matrix[i][j] = rand() % (range * 2 + 1) - range;
		}
	}
}

void outputMatrix(int** matrix, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << setw(3) << matrix[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

bool zero(int** matrix, int n, int column)
{
	int i;
	bool fl;
	fl = true;
	i = 0;
	while (fl && (i < n))
	{
		if (matrix[i][column] != 0)
		{
			fl = false;
		}
		++i;
	}
	return fl;
}

void change(int** matrix, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (zero(matrix, n, i))
		{
			for (int j = 0; j < n; ++j)
			{
				matrix[j][i] = matrix[j][j];
			}
		}
	}
}

void deleteMatrix(int** matrix, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}