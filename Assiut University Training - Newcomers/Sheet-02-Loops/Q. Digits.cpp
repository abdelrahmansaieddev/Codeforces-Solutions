#include<iostream>
using namespace std;

int main() {
	long long testcase,num2;
	cin >> testcase;
	for (long long i = 1;i <= testcase;i++)
	{
		cin >> num2;
		if (num2 == 0)
		{
			cout << 0 << endl;
			continue;
		}
		else
		{

			for (;num2 > 0;num2 /= 10)
			{
				cout << num2 % 10 << " ";
			}
		}
		cout << endl;
	}

}