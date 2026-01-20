#include<iostream>
using namespace std;

int main() {
    long long num1, num2, num3, num4, sum = 0;
    cin >> num1 >> num2 >> num3 >> num4;
    sum = (num1 * num2) - (num3 * num4);
    cout << "Difference = " << sum << endl;
    return 0;
}