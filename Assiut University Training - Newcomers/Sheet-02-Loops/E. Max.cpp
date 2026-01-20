#include<iostream>
using namespace std;

int main() {
	int num, num1,max=INT_MIN;
	cin >> num;
	for (int i = 1;i <= num;i++)
	{
		cin >> num1;
		if (max < num1)
			max = num1;
	}
	cout << max << endl;
	return 0;
}