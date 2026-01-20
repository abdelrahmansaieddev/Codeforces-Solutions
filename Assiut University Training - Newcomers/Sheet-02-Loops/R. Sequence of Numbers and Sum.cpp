#include<iostream>
using namespace std;

int main() {
	int num1, num2,min,max;
	while (cin >> num1 >> num2)
	{
		int sum = 0;
		if(num1 >0&&num2>0)
		{
			if (num1 > num2)
			{
				max = num1;
				min = num2;
			}
			else
			{
				max = num2;
				min = num1;
			}
			for (int i = min;i <= max;i++)
			{
				cout << i << " ";
				sum += i;
			}
		}
		else
			break;
		cout << "sum =" << sum << endl;	
	}
	return 0;
}