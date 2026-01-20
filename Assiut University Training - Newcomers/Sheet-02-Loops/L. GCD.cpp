#include<iostream>
using namespace std;

int main() {
	int num1, num2, maximum=0;
	cin >> num1 >> num2;
	for(int i=1;i<=num1;i++)
		if (num1 % i == 0 && num2 % i == 0)
			maximum = i;
	cout << maximum << endl;
}