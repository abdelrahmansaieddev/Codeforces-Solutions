#include<iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	long long num;
	for (int i = 0;i < testcase;i++)
	{
		cin >> num;
		long long sum = 1;
		for (int j = 1;j <= num;j++)
		{
			sum *= j;
		}
		cout << sum << endl;
	}
	return 0;
}