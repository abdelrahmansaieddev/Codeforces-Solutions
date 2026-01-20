#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int temp = num;
	int indx = 1;
	for (int i = 1;i <= num;i++)
	{
		int space = 1;
		for (;space < temp;space++)
		{
			cout << " ";
		}
		temp--;
		for (int j = 1;j <=indx;j++)
		{
			cout << "*";
		}
		indx += 2;
		cout << endl;
	}
	return 0;
}