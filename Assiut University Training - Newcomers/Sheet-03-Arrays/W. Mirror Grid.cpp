#include <iostream>
using namespace std;
int main()
{
    long long arr[101][101], row, col;
    cin >> row >> col;
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            cin >> arr[i][j];
    for(int i=0;i<row;i++)
    {
        for (int j = 0;j < col/2;j++)
        {
            int temp = arr[i][col - 1 - j];
            arr[i][col - 1 - j] = arr[i][j];
            arr[i][j] = temp;
        }
    }
    for (int i = 0;i < row;i++)
    {
        {
            for (int j = 0;j < col;j++)
                cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
