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
		if (arr[i] <= 10)
		{
			cout << "A[" << i << "]" << " = " << arr[i] << endl;
		}
	}
	
	return 0;
}
