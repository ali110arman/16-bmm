#include <iostream>
using namespace std;
void main() {
	int num1, num2, min;
	cout << "inter first number\n";
	cin >> num1;
	cout << "inter secooned number\n";
	cin >> num2;
	if (num1 > num2)
		min = num2;
		else {
		min = num1;
	}
	for (min;min > 1;min--) {
		if (num1 % min == 0 && num2 % min == 0) {
			cout << "b.M.M of your numbers is:"<<min<<endl;
			min = 0;
		}
	}
}
