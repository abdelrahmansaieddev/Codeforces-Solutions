#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    string fname1, lname1,fname2,lname2;
    cin >> fname1 >> lname1;
    cin >> fname2 >> lname2;
    if (lname1 == lname2)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;
    return 0;
}