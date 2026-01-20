#include<iostream>
using std::cin; using std::cout; using std::string;
void swap(int num1, int num2);
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	swap(num1, num2);
	return 0;
}
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 << "\n";
}
