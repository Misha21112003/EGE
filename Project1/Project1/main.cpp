#include <iostream>

using namespace std;

int main()
{
	int amount = 0;
	cout << "input amount of numbers: ";
	cin >> amount;

	int number = 0;
	int max = 0;
	cout << "input numbers: ";
	cin >> max;

	for (int i = 2; i <= amount; ++i)
	{
		cin >> number;
		
		if (number > max)
		{
			max = number;
		}
	}

	cout << "max = " << max;

	return 0;
}