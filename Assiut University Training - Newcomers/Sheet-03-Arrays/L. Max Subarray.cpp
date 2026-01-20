#include <iostream>
using namespace std;


int main() 
{
    int testcase, n,arr[200001];
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        for (int i = 0;i < n;i++)
            cin >> arr[i];
        for (int i = 0;i < n;i++)
            cout << arr[i]<<" ";
        for(int i=0;i<n;i++)
        {
            int max = INT_MIN;
            for (int j = i + 1;j < n;j++)
            {

                if (arr[j] > arr[i] && arr[j] > max)
                    max = arr[j];
                else if (arr[i] > arr[j] && arr[i] > max)
                    max = arr[i];
                cout << max <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
