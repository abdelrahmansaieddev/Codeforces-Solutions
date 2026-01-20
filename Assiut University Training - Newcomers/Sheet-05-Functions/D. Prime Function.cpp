#include<iostream>
using std::cin; using std::cout; using std::string;
void PRIME(int num);
int main()
{
	int num;
	cin >> num;
	PRIME(num);
	
}

void PRIME(int num)
{
	int n1;
	for (size_t i = 0; i < num; i++)
	{
		bool isPrime=true;
		cin >> n1;
		if (n1 < 2) 
		{
			cout << "NO\n";
			continue;
		}
		for (size_t j = 2; j*j <=n1 ; j++)
		{
			if (n1 % j == 0) {
				cout << "NO\n";
				isPrime = false;
				break;
			}
		
		}
		if (isPrime)
			cout << "YES\n";

	}

}