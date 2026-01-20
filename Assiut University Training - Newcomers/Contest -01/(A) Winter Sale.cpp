#include <iostream> 
#include <iomanip>
using std::cout;
using std::cin;
int main()
{
	int discount, p;
	cin >> discount >> p;
	double price = (100.0 * p) / (100 - discount);
	cout << std::fixed << std::setprecision(2) << price << "\n";
}
