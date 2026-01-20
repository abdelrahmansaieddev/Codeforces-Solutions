#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long long num1, num2,count=0;
	cin >> num1 >> num2;
	for (int i = 0;i <= num1;i++)
	{
		for (int j = 0;j <= num1;j++)
			{
			long long q = num2 - i - j;
			if (q >= 0 && q <= num1)
				count++;
		}
		
	}
	cout << count << endl;
	return 0;
}
