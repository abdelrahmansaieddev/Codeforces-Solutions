#include<iostream>
using namespace std;
int main()
{
	long long arr[1000];
	int n ;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		if (arr[i] > 0)
			arr[i] = 1;
		else if (arr[i] < 0)
			arr[i] = 2;
	}
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
