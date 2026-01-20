#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long num1,num2;
    double sum, floor, ceil, round;
    cin >> num1 >> num2;
    sum = (double)num1 / num2;
    floor = (int)sum;
    if ((sum - (int)sum) != 0.0)
        ceil = floor + 1;
    else
        ceil = floor;
    round = sum - (int)sum;
    if (round >= 0.5)
        round = ceil;
    else
        round = floor;
    cout << "floor " << num1 << " / " << num2 << " = " << floor << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round << endl;

    return 0;
}