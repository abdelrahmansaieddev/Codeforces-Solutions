#include<iostream>
using namespace std;
int main()
{
	int testcase, n;
	long long arr[100];
	cin >> testcase;
	while (testcase--)
	{
		cin >> n;
		for (int i = 1;i <= n;i++)
			cin >> arr[i];
		long long min = LONG_MAX;
		for(int i=1;i<=n;i++)
		{
			for (int j = i+1;j <= n;j++)
			{
				long long sum = arr[i] + arr[j] + j - i;
				if (min > sum)
					min = sum;
			}
		}
		cout << min << endl;;
	}
	
		return 0;
}
