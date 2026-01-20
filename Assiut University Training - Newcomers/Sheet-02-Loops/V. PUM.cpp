#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1;i <= num*4;i++)
	{
		if(i%4==0)
			cout << "PUM" << endl;
		else
			cout << i << " ";
	}
	return 0;
}