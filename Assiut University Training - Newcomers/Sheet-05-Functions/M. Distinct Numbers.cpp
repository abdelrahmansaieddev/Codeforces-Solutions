#include<iostream>
using std::cin; using std::cout;
int distinct(int arr[]);
int main()
{
	int arr[1000],freq[2002]={0}, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		freq[arr[i] + 1000]++;
	}
	cout << distinct(freq) << "\n";
	return 0;
}
int distinct(int arr[])
{
	int count = 0;
	for (int i = 0; i < 2002; i++)
	{
		if (arr[i] > 0)
			count++;
	}
	return count;
}