#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1;
    double const pi= 3.141592653;
    cin >> num1;
    double area = pi * num1 * num1;
    cout <<fixed<< setprecision(9) << area<< endl;
    return 0;
}