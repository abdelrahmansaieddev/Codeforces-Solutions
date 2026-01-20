#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	char op;
	cin >> op >> num1;
	for (int i = 1;i <= num1;i++)
	{
		cin >> num2;
		for(int i=1;i<=num2;i++)
			cout << op;
		cout << endl;
	}
	return 0;
}