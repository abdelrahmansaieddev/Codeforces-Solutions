#include <iostream>
using namespace std;
int main()
{
    char arr[100][100];
    int d1[8] = { -1,-1,-1,0,0,1,1,1 };
    int d2[8] = { -1,0,1,-1,1,-1,0,1 };
    int row, col, a,b;
    cin >> row >> col;
    for (int i = 0;i < row;i++)
        for (int j = 0;j < col;j++)
            cin >> arr[i][j];
    cin >> a >> b;
            for (int d = 0;d < 8;d++)
            {
                int di = (a - 1) + d1[d];
                int dj = (b - 1) + d2[d];
                if (di>=0&&dj>=0 && di<row && dj<col &&arr[di][dj] != 'x')
                {
                    cout << "no" << endl;
                    return 0;
               }
            
    }
    cout << "yes" << endl;
    return 0;
}
