#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    char x;
    cin >> x;
    if ((int)x >= 65 && (int)x <= 90)
    {
        x = x + 32;
        cout << (char)x << endl;
    }
    else 
    {
        x = x - 32;
        cout << (char)x << endl;
    }

    return 0;
}