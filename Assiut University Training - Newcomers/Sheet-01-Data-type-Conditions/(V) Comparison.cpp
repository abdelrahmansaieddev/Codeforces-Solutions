#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long num1, num2;
    char x;
    cin >> num1 >> x >> num2;
    if (x == '>')
        if (num1 > num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    if (x == '<')
        if (num1 < num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    if(x=='=')
        if(num1==num2)
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;

    return 0;
}