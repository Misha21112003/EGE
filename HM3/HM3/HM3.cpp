#include <iostream>
using namespace std;
int main() {
	int InputNumber = 0;
	int amount = 0;
	int QuantityNumbers = 0;
	cin >> QuantityNumbers;
	for (int i = 0; i < QuantityNumbers; i++) {
		cin >> InputNumber;
		if (InputNumber % 5 == 2) {
			amount++;
		}
	}
	cout << amount;
	return 0;
}
