#include<iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;
	bool no_lucky = true;
	for(int i =num1;i<=num2;i++)
	{
		int count = 0;
		int temp = 0;
		int j = i;
		while (j > 0)
		{
			count++;
			if (j % 10 == 7 || j % 10 == 4)
			{
				temp++;
			}
			j = j / 10;
		}
		if (count == temp)
		{
			cout << i << " ";
			no_lucky = false;
			continue;
		}
	}
	if(no_lucky)
	{
		cout<<"-1";
	}
	return 0;
}