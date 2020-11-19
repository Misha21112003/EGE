#include <iostream>
using namespace std;
int main() {
	int InputNumber = 0;
	int amount = 0;
	int QuantityNumbers = 0;
	cin >> QuantityNumbers;
	for (int i = 0; i < QuantityNumbers; i++) {
		cin >> InputNumber;
		if (InputNumber % 7 == 3) {
			amount++;
		}
	}
	if (amount >= 2) {
		cout << "Yes";
	}
	else cout << "No";
	return 0;