#include <iostream>
using namespace std;
int main() 
{
    int arr[1000], n,min=INT_MAX,max=INT_MIN,indxmin=-1,indxmax=-1;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            indxmax = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            indxmin = i;
        }
    }
    arr[indxmin] = max;
    arr[indxmax] = min;
    for (int i = 0;i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
