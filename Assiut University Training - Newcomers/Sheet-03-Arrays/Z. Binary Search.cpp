#include <iostream> 
#include<algorithm>
using namespace std; 
int main() 
{ 
	int arr[100000], n, testcase,x;
	cin >> n >> testcase;
	for (int i = 0;i < n;i++)
		cin >> arr[i];
	sort(arr, arr + n);
	
	while (testcase--)
	{

		cin >> x;
		bool is_exist = true;
		int right = n - 1, left = 0;
		while(left<=right)
		{
			is_exist = false;
			int mid = (right + left) / 2;
			if (x == arr[mid])
			{
				is_exist = true;
				break;
			}
			if (x < arr[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (is_exist)
			cout << "found" << endl;
		else
			cout << "not found" << endl;
	}
	return 0;
}