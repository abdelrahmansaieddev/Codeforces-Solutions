#include <iostream>
using namespace std;
int main()
{
    int arr[100][100], row, col, x;
    cin >> row >> col;
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            cin >> arr[i][j];
    cin >> x;
    bool is_exist = false;
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < col;j++)
        {
            if (x == arr[i][j])
            {
                is_exist = true;
                cout << "will not take number" << endl;
                return 0;
            }
        }
    }
    if (!is_exist)
        cout << "will take number" << endl;
    return 0;
}
