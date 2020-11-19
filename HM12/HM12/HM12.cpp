#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int min = 0;
	cin >> min;
	for (int i = 2; i <= 10; ++i)
	{
		cin >> number;
		if (number < min)
		{
			min = number;
		}
	}

	cout << min;
	return 0;
}