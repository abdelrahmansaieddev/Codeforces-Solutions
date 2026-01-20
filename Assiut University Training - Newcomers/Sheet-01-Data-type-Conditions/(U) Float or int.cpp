#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1,sum=0;
    cin >> num1;
    sum = num1 - (int)num1;
    if (sum == 0)
        cout << "int " << (int)num1 << endl;
    else
        cout << "float " << (int)num1 << " " << sum << endl;
    return 0;
}