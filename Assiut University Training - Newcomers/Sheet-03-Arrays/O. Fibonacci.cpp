#include <iostream>
using namespace std;
int main() 
{
    int num;
    long long a=0,b=1;
    cin >> num;
    if (num == 1)
    {
        cout << "0" << endl;
        return 0;
    }
    for (int i = 2;i < num;i++)
    {
        long long c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;

    return 0;
}
