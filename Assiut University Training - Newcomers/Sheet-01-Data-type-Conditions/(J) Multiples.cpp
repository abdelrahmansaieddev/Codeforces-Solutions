#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long num1, num2;
    cin >> num1 >> num2;
    if (num1 >= num2)
        if ((num1 / num2) >= ((double)(num1) / (num2)))
            cout << "Multiples" << endl;
        else
            cout << "No Multiples" << endl;
    else
        if ((num2 / num1) >= ((double)(num2) / (num1)))
            cout << "Multiples" << endl;
        else
            cout << "No Multiples" << endl;

    return 0;
}