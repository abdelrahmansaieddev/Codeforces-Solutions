#include <iostream>
using std::cin;using std::cout;
int main()
{
    int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
    {
		for (int j = 0; j < n; ++j)
        {
			if (j == n / 2 && i == n / 2)
                cout<<"X";
            else if(j==i)
                cout<<"\\";
			else if (j == n - i - 1)
				cout << "/";
            else
                cout << "*";
        }
		cout << "\n";
    }
    return 0;
}
