#include <iostream>
using namespace std;
int main()
{
    int arr1[10000], arr2[10000], a, b;
    cin >> a >> b;
    for (int i = 0;i < a;i++)
        cin >> arr1[i];
    for (int i = 0;i < b;i++)
        cin >> arr2[i];
    if (b > a)
    {
        cout << "NO" << endl;
        return 0;
    }
    int j = 0;
    for (int i = 0;i < a;i++)
        if (j < b && arr1[i] == arr2[j])
            j++;
    if (j == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
