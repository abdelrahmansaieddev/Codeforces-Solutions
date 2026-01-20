#include<iostream>
using namespace std;
int main()
{
	long long arr[1000] ;
	int n ,temp=0;
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i < n;i++)
	{
		for (int j =i+1 ;j <= n-1;j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
	for (int i = 0;i < n;i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
