#include <iostream> 
using std::cout;
using std::cin;
int main()
{
	long long player1, player2, divi;
	cin >> player1 >> player2 >> divi;
	if (player1 % divi == 0 && player2 % divi == 0)
		cout << "Both\n";
	else if (player1 % divi == 0 && player2 % divi != 0)
		cout << "Memo\n";
	else if (player1 % divi != 0 && player2 % divi == 0)
		cout << "Momo\n";
	else if (player1 % divi != 0 && player2 % divi != 0)
		cout << "No One\n";
	return 0;
}
