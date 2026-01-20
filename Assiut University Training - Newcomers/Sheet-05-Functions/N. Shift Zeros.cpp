#include<iostream>
using std::cin; using std::cout;
void printWithZerosAtEnd(int size);
int main()
{
	int size;
	cin >> size;
	printWithZerosAtEnd(size);
	return 0;
}
void printWithZerosAtEnd(int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		int value;
		cin >> value;
		if (value != 0)
			cout << value << " ";
		else
			count++;
	}
	for (int i = 0; i < count; i++)
		cout << "0" << " ";
}