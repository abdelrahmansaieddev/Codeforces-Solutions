#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long long testcase, num;
	cin >> testcase;
	for (long long i = 1;i < testcase + 1;i++) {
		cin >> num;
		double temp = num;
		long long sum = 0;
		long long zero_count = 0;
		long long ones_count = 0;
		for (;temp > 0;)
		{
			temp = temp / 2;
			if (temp == (int)temp)
			{
				zero_count++;
			}
			else
			{
				ones_count++;
				temp = (int)temp;
			}
		}
		for (long long j=0;j < ones_count;j++)
		{
			sum += 1 * pow(2, j);
		}
		cout << sum << endl;

	}
	return 0;
}
