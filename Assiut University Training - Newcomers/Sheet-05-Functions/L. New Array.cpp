#include<iostream>
using std::cin; using std::cout;
void concatenation(int arr1[], int arr2[], int n);
int main()
{
	int arr1[100000], arr2[100000], n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	for (int i = 0; i < n; i++)
		cin >> arr2[i];
	concatenation(arr1, arr2, n);
	return 0;
}
void concatenation(int arr1[], int arr2[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";
	for (int i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << "\n";

}