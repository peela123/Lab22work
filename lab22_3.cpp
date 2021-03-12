#include <iostream>
#include <set>
#include <string>

using namespace std;

//Write function count() here.
int count(int x[], int N)
{
	set<int> myset;
	for (int i = 0; i < N; i++)
	{
		myset.insert(x[i]);
	}

	int A = 0;
	set<int>::iterator i;
	for (i = myset.begin(); i != myset.end(); i++)
	{
		A++;
	}
	return A;
}

int main()
{
	int data[] = {1, 2, 4, 5, 4, 8, 2, 1, 2, 4, 6, 1, 4, 4, 4, 2, 1, 0, 12};

	cout << "There are " << count(data, sizeof(data) / sizeof(int));
	cout << " different numbers in data.";

	return 0;
}
