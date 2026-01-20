#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 2;i <= num;i++)
	{
		if (num % i == 0)
		{
			if (i == num)
			{
				cout << "YES" << endl;
				break;
			}
			else
			{
				cout << "NO" << endl;
				break;
			}
		}
	}
	return 0;
}