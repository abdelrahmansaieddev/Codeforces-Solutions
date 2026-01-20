#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (num1 > num2 && num1 - num2 >= 0 && num1 - num2 <= 1)
		cout << "YES\n";
	else if (num1 < num2 &&num2 - num1 >= 0 && num2 - num1 <= 1)
		cout << "YES\n";
	else if (num1 == num2 && num1!=0)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
