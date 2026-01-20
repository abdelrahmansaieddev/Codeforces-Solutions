#include<iostream>
using namespace std;

int main() {
    long long n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
   long long num1 = n1 % 100;
   long long num2 = n2 % 100;
   long long num3 = n3 % 100;
   long long num4 = n4 % 100;
   long long sum = num1 * num2 * num3 * num4;
    if ((sum % 100) < 10)
        cout << "0" << sum % 100 << endl;
    else
       cout << sum % 100 << endl;
    return 0;
}