#include<iostream>
using namespace std;

int main() {
	long long num;
	cin >> num;
	int count = 0;
	for (int i = 2;i <= num;i+=2)
	{
			cout << i << endl;
			count++;
	}
	if (count == 0)
	{
		cout << "-1" << endl;
	}
}