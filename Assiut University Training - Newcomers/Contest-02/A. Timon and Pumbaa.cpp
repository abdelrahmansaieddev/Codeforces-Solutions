#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
	long long num1, num2;
	cin >> num1 >> num2;
	if (num1 >= num2)
		cout << num1 - num2 << "\n";
	else
		cout << "0\n";
	return 0;
}
