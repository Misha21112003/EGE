#include <iostream>
using namespace std;
int main() 
{
	int InputNumber = 0;
	int amount = 0;
	for (int i = 0; i < 4; i++) {
		cin >> InputNumber;
		if (InputNumber % 7 == 0) {
			amount++;
		}
	}
	cout << amount;
	return 0;
}