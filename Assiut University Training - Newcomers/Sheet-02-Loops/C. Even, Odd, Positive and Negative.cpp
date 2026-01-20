#include<iostream>
using namespace std;

int main() {
	long long num,num1,count_even=0,count_odd=0,count_neg=0,count_pos=0;
	cin >> num;
	for (long long i = 0;i < num;i++) {
		cin >> num1;
		if(num1%2==0)
			count_even++;
		else
			count_odd++;
		if (num1 > 0)
			count_pos++;
		else if (num1 < 0 && num1 != 0)
			count_neg++;
	}
	cout << "Even: " << count_even << endl;
	cout << "Odd: " << count_odd << endl;
	cout << "Positive: " << count_pos << endl;
	cout << "Negative: " << count_neg << endl;
	return 0;
}