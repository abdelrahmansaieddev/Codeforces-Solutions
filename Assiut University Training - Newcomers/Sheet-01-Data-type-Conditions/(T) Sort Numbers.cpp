#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long n1,n2,n3, num1, num2, num3,temp;
    cin >> n1 >> n2 >> n3;
    num1 = n1;
    num2 = n2;
    num3 = n3;
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << endl;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;


    return 0;
}
