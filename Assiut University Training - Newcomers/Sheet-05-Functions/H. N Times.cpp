#include<iostream>
using std::cin; using std::cout; using std::string;
void print(int testcase);
int main()
{
	int num;
	cin >> num;
	print(num);
	return 0;
}
void print(int testcase)
{
	while (testcase--)
	{
		int num;
		char x;
		cin >> num >> x;
		for (int i = 0; i < num; i++)
			cout << x << " ";
		cout << "\n";
	}
}