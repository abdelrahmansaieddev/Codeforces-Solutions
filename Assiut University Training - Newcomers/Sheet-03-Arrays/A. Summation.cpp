#include<iostream>
using namespace std;
int main()
{
	long long arr[100000] ,sum=0;
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if (sum < 0)
		cout << sum * -1 << endl;
	else
		cout << sum << endl;

	

	return 0;
}
