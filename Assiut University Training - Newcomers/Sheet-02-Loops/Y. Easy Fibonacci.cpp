#include<iostream>
#include<math.h>
using namespace std;

int main() {
	long long num,a=0,b=1;
	cin >> num;
	if(num ==0 || num==1)
	{
		cout << 0;
		return 0;
	}
	else if(num ==2)
	{
		cout << a << " " << b;
		return 0;
	}
	else
	{

		cout << a << " " << b;
		for (int i = 2;i < num;i++)
		{
			long long c = a + b;
			a = b;
			b = c;
			cout << " " << c;
		}
	}
	return 0;
}
