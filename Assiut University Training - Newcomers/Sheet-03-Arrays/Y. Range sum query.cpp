#include <iostream>
using namespace std;
int main()
{
    int arr[100000], testcase, l, r, n;
    long long prifx[100000], sum = 0;
    cin >> n >> testcase;
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
        prifx[i] = sum; 
    }
    while (testcase--)
    {
        cin >> l >> r;
        long long tsum = 0;
        l--;
        r--;
        if (l == 0)
            tsum = prifx[r];
        else
            tsum = prifx[r] - prifx[l - 1];
        cout << tsum << "\n";
    }
    return 0;
}
