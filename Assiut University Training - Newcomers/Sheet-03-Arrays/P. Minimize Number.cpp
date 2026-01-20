#include <iostream>
using namespace std;
int main() 
{
    long long arr[201];
    int num, count = 0;
    cin >> num;
    for(int i=0;i<num;i++)
        cin >> arr[i];
    for (int i = 0;i < num;i++)
    {
        if (arr[i] % 2 == 0)
            arr[i] = arr[i] / 2;
        else
        {
            cout << count << endl;
            break;
        }
        if (i + 1 == num)
        {
            i = -1;
            count++;
        }

    }
    return 0;
}
