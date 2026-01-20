#include <iostream>
using std::cin;using std::cout;
int maximum(int arr[], int n);
int minimum(int arr[], int n);
int primenumber(int arr[], int n);
int palindromenumbers(int arr[], int n);
int maximumnumberofdivisors(int arr[], int n);
int main()
{
	int n,arr[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout <<"The maximum number : "<< maximum(arr, n) << "\n";
	cout << "The minimum number : " << minimum(arr, n) << "\n";
	cout << "The number of prime numbers : " << primenumber(arr, n) << "\n";
	cout << "The number of palindrome numbers : " << palindromenumbers(arr, n) << "\n";
	cout << "The number that has the maximum number of divisors : " << maximumnumberofdivisors(arr, n) << "\n";
    return 0;
}
int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
	return min;
}
int primenumber(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool is_prime = true;
        if (arr[i] < 2)
        {
            is_prime = false;
            continue;
        }
        if (arr[i] == 2 || arr[i] == 3)
        {
            count++;
            continue;
        }
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
            count++;
    }
    return count;
}
int palindromenumbers(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<10)
			count++;
        else
        {
            int rev=0,num=arr[i];
            while(num!=0)
            {
                int digit=num%10;
                rev=rev*10+digit;
                num=num/10;
            }
            if(rev==arr[i])
				count++;
        }
    }
	return count;
}
int maximumnumberofdivisors(int arr[], int n)
{
   int maxDivisors = 0;
    int numberWithMaxDivisors = arr[0];
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count > maxDivisors)
        {
            maxDivisors = count;
            numberWithMaxDivisors = arr[i];
        }
        else if(count==maxDivisors)
            {
            if (arr[i] > numberWithMaxDivisors)
                numberWithMaxDivisors = arr[i];
            }

        
    }
	return numberWithMaxDivisors;
}
