#include<iostream>
using std::cin; using std::cout; using std::string;
void sum(int num1, int num2);
int main()
{
	int num1, num2;
	cin >> num1>> num2;
	sum(num1, num2);
	return 0;
}
void sum(int num1, int num2)
{
	cout << num1 + num2 << "\n";
}
