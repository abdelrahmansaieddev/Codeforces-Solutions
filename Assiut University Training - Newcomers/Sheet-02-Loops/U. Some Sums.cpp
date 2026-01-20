#include<iostream>
using namespace std;

int main() {
	int num1, x, y,sum=0,result=0;
	cin >> num1 >> x >> y;
	for (int i = 1;i <= num1;i++)
	{
		int j = i;
		int sum = 0;
		for (;j > 0;j /= 10)
		{
			sum += j % 10;
		}
		if (x <= sum && sum <= y || x >= sum && sum >= y)
			result += i;
			
	}
	if (result != 0)
		cout << result << endl;
	else
		cout << "0" << endl;
	return 0;
}