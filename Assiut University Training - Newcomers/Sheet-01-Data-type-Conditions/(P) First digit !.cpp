#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int num;
    cin >> num;
    if ((num / 1000) % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}