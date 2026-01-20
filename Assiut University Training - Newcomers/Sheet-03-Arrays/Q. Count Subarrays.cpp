#include <iostream>
using namespace std;
int main()
{
    int testcase, arr[100], n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> n;
        int count = 0;
        for (int i = 0;i < n;i++)
            cin >> arr[i];
        for (int i = 0;i < n;i++)
        {
            int indx = i;
            for (int j = i + 1;j < n;j++)
            {
                if (arr[j] > arr[indx])
                {
                    count++;
                    indx++;
                }
                else
                    break;
            }
        }
        cout << count+n << endl;
    }
    return 0;
}
