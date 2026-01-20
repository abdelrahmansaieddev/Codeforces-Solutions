#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, year = 0, month = 0, day = 0;
    cin >> x;
    year = x / 365;
    month = (x % 365) / 30;
    day = (x % 365) % 30;
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;


    return 0;
}