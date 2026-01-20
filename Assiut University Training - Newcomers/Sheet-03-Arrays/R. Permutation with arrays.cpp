#include <iostream>
using namespace std;
int main()
{
    int arr1[1000], arr2[1000],used[1000]={0}, N, count = 0;
    cin >> N;
    for (int i = 0;i < N;i++)
        cin >> arr1[i];
    for (int i = 0;i < N;i++)
        cin >> arr2[i];
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j < N;j++)
        {
            if (arr1[i] == arr2[j]&& used[j]==0)
            {
                count++;
                used[j]++;
                break;
            }
        }
    }
    if (count==N)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
