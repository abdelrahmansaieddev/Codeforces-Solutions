#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    char x;
    long long num1, num2;
    cin >> num1 >> x >> num2;
    if (x == '+')
        cout << num1 + num2 << endl;
    else if (x == '-')
        cout << num1 - num2 << endl;
    if (x == '*')
        cout << num1 * num2 << endl;
    if (x == '/')
        cout << num1 / num2 << endl;

    return 0;
}