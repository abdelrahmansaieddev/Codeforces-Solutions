#include <iostream>
using namespace std;
int main() 
{
    int num1, num2;
    string arr;
    cin >> num1 >> num2;
    cin >> arr;
    bool ok = false;
    if(arr.size()!=(num1+num2+1)||arr[num1]!='-')
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0;i < arr.size();i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
            ok = true;
        else if (i == num1 && arr[i] == '-')
            ok = true;
        else 
        {
            ok = false;
            break;
        }
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
