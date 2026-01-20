#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long num1, num2;
    cin >> num1 >> num2;
    if (num1 >= num2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}