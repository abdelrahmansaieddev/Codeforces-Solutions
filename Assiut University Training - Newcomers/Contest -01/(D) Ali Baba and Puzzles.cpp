#include<iostream>
using std::cin; using std::cout; using std::string;
void findOperator(long long num1, long long num2, long long num3, long long num4);
int main()
{
	long long num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	findOperator(num1,num2,num3,num4);
	return 0;
}
void findOperator(long long num1, long long num2, long long num3, long long num4)
{
	if (num1 + num2 - num3 == num4)
		cout << "YES\n";
	else if (num1 + num2 * num3 == num4)
		cout << "YES\n";
	else if (num1 - num2 + num3 == num4)
		cout << "YES\n";
	else if (num1 * num2 + num3 == num4)
		cout << "YES\n";
	else if (num1 - num2 * num3 == num4)
		cout << "YES\n";
	else if (num1 * num2 - num3 == num4)
		cout << "YES\n";
	else
		cout << "NO\n";
}
