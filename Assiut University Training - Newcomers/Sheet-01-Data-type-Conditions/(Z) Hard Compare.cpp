#include<iostream>
#include <math.h>
using namespace std;

int main() {
    long long n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    double sum1 = n2*log(n1);
    double sum2 = n4*log(n3);
    if (sum1 > sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}