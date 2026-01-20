#include<iostream>
using namespace std;

int main() {
	int testcase, num1, num2, min, max;
	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> num1 >> num2;
		int sum = 0;
		bool is_even = true;
		if(num1 < num2) {
			min = num1;
			max = num2;
		} else {
			min = num2;
			max = num1;
		}
		for (int j = min+1; j < max; j++) {
			if (j % 2 != 0)
			{
				sum += j;
				is_even = false;
			}
		}
		if (is_even) {
			cout << 0 << endl;
		} else {
			cout << sum << endl;
		}
	

	}
	return 0;
}