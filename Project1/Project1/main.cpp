//������������ ������ ��� �����
//������� ���������� ������ ����� ���



#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int amount = 0;
	for (int i = 0; i < 3 ; ++i)
	{

		cin >> number;

		if (number % 2 == 0)
		{
			++amount;
		}
	}
	

	

	cout << amount;
	return 0;
}