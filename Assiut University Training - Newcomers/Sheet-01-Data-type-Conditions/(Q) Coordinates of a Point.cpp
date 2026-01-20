#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1, num2;
    cin >> num1 >> num2;
    if (num1 == 0 && num2 == 0)
        cout << "Origem" << endl;
    if (num1 == 0 && num2 != 0)
        cout << "Eixo Y" << endl;
    if (num1 != 0 && num2 == 0)
        cout << "Eixo X" << endl;
    if (num1 > 0 && num2 > 0)
        cout << "Q1" << endl;
    if (num1 < 0 && num2 > 0)
        cout << "Q2" << endl;
    if (num1 < 0 && num2 < 0)
        cout << "Q3" << endl;
    if (num1 > 0 && num2 < 0)
        cout << "Q4" << endl;


    return 0;
}