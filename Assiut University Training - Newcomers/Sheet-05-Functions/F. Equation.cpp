#include<iostream>
using std::cin; using std::cout; using std::string;
long long power(long long num, long long pow);
void equation(long long num1, long long num2);
int main()
{
	long long num1, num2;
	cin >> num1 >> num2;
	equation(num1, num2);
	return 0;
}
long long power(long long num, long long pow)
{
	long long result = 1;
	while (pow--)
		result *= num;
	return result;
}
void equation(long long num1, long long num2)
{
	long long result = 1, sum = 0, count = 2;
	if (num2 % 2 == 0)
	{
		while (count <= num2)
		{
			sum += power(num1, count);
			count += 2;
		}
		cout << sum << "\n";
	}
	else
	{
		while (count < num2)
		{
			sum += power(num1, count);
			count += 2;
		}
		cout << sum << "\n";
	}

}