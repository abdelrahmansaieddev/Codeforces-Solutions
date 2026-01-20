#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int result = 0;
	int test = num;
	for (;num > 0;num /= 10)
	{
		result = result * 10 + num%10;
	}
	cout << result << endl;
	if(test==result)
		cout<< "YES";
	else
		cout << "NO";
	return 0;
}