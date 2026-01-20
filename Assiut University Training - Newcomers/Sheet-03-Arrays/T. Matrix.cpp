#include <iostream>
using namespace std;
int main()
{
    int arr[100][100], n, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 0;i < n;i++)
        for (int j = 0;j < n;j++)
            cin >> arr[i][j];
   //first diagonal 
    for (int i = 0;i < n;i++)
        sum1 += arr[i][i];
    //second diagonal 
    for (int i = 0;i < n;i++)
        sum2 += arr[i][n - 1 - i];
    int absdifference = sum1 - sum2;
    if (absdifference < 0)
        cout << absdifference * -1 << endl;
    else
        cout << absdifference << endl;

    return 0;
}
