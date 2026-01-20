#include<iostream>
using namespace std;
int main()
{
	long long arr[1000], min,indx=0;
	int n ;
	cin >> n;
	cin >> arr[0];
	min = arr[0];
	for (int i = 1;i < n;i++)
	{
		cin >> arr[i];
		if (min > arr[i])
		{
			min = arr[i];
			indx = i;
		}
	}
	cout << min << " " << indx + 1 << endl;
	return 0;
}
