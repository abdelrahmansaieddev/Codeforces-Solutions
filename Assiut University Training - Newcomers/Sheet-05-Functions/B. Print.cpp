#include<iostream>
using std::cin; using std::cout; using std::string;
void ptint(int num1);
int main()
{
	int num1;
	cin >> num1;
	ptint(num1);
	return 0;
}
void ptint(int num1)
{
	for (int i = 1; i < num1; i++)
		cout << i << " ";
	cout <<num1<< "\n";
}
