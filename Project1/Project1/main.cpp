#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	
	cin >> a >> b;

	if (a % 2 == 0 && b % 2 == 0)
	{
		cout << a + b;
	}
	else if (a % 2 == 1 && b % 2 == 1)
	{
		cout << a * b;
	}
	else
	{
		cout << a - b;
	}

	return 0;
}