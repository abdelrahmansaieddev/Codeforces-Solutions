#include<iostream>
using std::cin; using std::cout; using std::string;
int main()
{
	long long eye, mouth, body,result=0;
	cin >> eye >> mouth >> body;
	if (eye == 0 || body == 0)
	{
		cout << result << "\n";
		return 0;
	}
	if (mouth == 0)
		result = (eye / 2) + body;
	else if (eye <= body && eye <= mouth)
		result = eye;
	else if (mouth < eye && mouth < body)
	{
		result = mouth;
		eye = eye - mouth;
		body = body - mouth;
		if ((eye / 2) <= body)
			result += (eye / 2);
		else
			result += body;
	}
	else if (eye >= body && body <= mouth)
		result = body;
	cout << result << "\n";
	return 0;
}
