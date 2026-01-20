#include<iostream>
#include<iomanip>
using std::cout; using std::cin; using std::string; using std::setprecision; using std::fixed;
#include <iomanip>
double ava(double arr[], int n);
int main()
{
	double arr[10000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout <<fixed<<setprecision(7)<< ava(arr, n) << "\n";

	return 0;
}
double ava(double arr[], int n)
{
	double sum = 0;
	double avar = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];
	avar = sum / n;
	return avar;
}
