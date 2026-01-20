#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long num1, num2, num3;
    char s, q;
    cin >> num1 >> s >> num2 >> q >> num3;
    if (s == '+')
        if (num1 + num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 + num2 << endl;
    if (s == '-')
        if (num1 - num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 - num2 << endl;
    if (s == '*')
        if (num1 * num2 == num3)
            cout << "Yes" << endl;
        else
            cout << num1 * num2 << endl;
    return 0;
}