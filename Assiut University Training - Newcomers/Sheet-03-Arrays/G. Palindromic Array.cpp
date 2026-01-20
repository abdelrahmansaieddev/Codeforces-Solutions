#include<iostream>
using namespace std;
int main()
{
	long long arr[100000] ;
	int n ;
	cin >> n;
	bool is_palindromes = true;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	for (int i = 0;i < n/2;i++)
	{
		if (arr[i] != arr[n - 1 - i])
		{
			is_palindromes = false;
			break;
		}
	}
	if (is_palindromes)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
