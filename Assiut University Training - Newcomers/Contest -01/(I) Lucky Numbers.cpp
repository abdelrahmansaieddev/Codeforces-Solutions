#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
	int num;
	cin >> num;
	int num1 = num % 10;
	int num2 = num / 10;
	int sum = num1 % num2;
	if (num1%num2 == 0||num2%num1==0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
