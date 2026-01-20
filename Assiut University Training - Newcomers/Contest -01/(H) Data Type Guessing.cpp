#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long result = a * b;
	if (result % c != 0)
		cout << "double\n";
	else
		if ((result / c) <= 2147483647)
			cout << "int\n";
		else
			cout << "long long\n";
	return 0;
}
