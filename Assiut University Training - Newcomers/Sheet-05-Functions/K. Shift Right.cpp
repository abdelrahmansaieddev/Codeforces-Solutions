#include<iostream>
using std::cin; using std::cout;
void shiftright(int arr[], int size, int k);
int main()
{
	int arr[10000], size, k;
	cin >> size >> k;
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	shiftright(arr, size, k);
	return 0;
}
void shiftright(int arr[], int size, int k)
{
	int result = k % size;

	while (result--)
	{
		for (int i = size-1; i > 0; i--)
		{
			int temp = arr[i - 1];
			arr[i - 1] = arr[i];
			arr[i] = temp;
		}
	}
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "\n";
}