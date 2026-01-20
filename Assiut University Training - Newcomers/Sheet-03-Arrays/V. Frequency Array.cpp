#include <iostream>
using namespace std;
int main()
{
    int arr[100000], freq[100001]={0}, num1, num2;
    cin >> num1 >> num2;
    for (int i = 0;i < num1;i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 1;i <= num2;i++)
        cout << freq[i] << endl;
    return 0;
}
