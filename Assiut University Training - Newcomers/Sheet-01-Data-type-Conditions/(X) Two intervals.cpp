#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    long long s1, e1, s2, e2,s_int,e_int;
    cin >> s1 >> e1 >> s2 >> e2;
    if (s1 > s2)
        s_int = s1;
    else
        s_int = s2;
    if (e1 < e2)
        e_int = e1;
    else
        e_int = e2;
    if (s2 > e1 || s1 > e2)
        cout << "-1" << endl;
    else
        cout << s_int << " " << e_int << endl;
    return 0;
}