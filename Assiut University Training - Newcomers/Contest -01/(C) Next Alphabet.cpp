#include <iostream> 
using std::cout;
using std::cin;
int main()
{
	char character;
	cin >> character;
	if (character >= 'a' && character < 'z')
		cout << (char)(character + 1) << "\n";
	else if (character == 'z')
		cout << "a\n";
	return 0;
}
