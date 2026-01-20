#include<iostream>
using std::cout; using std::cin; using std::string;
void swapRow(int arr[][500], int row1, int row2, int n);
void swapCol(int arr[][500],int col1,int col2, int n);
int main()
{
	int arr[500][500], n, x, y;
	cin >> n >> x >> y;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	swapRow(arr, x, y, n);
	swapCol(arr, x, y, n);
	return 0;
}
void swapRow(int arr[][500], int row1, int row2, int n)
{
	for (int i = 0; i < n; i++)
	{
		int temp = arr[row1-1][i];
		arr[row1-1][i] = arr[row2-1][i];
		arr[row2-1][i] = temp;
	}
}
void swapCol(int arr[][500], int col1, int col2, int n)
{
	for (int i = 0; i < n; i++)
	{
		int temp = arr[i][col1-1];
		arr[i][col1-1] = arr[i][col2-1];
		arr[i][col2-1] = temp;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << "\n";
	}
}
