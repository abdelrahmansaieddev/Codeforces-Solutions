#include<iostream>
using std::cin; using std::cout; using std::string;
void getMaxMin(int arr[], int size);
int main()
{
	int arr[1001], n;
	cin >> n;
	getMaxMin(arr, n);
	return 0;
}
void getMaxMin(int arr[], int size)
{
	int max = INT_MIN, min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	cout << min << " " << max << "\n";
}