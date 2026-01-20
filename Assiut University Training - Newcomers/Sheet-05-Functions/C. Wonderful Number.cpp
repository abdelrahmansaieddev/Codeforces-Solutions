#include<iostream>
using std::cin; using std::cout; using std::string;
void check(int num);
void palindrome(int num);
int main()
{
	int num;
	cin >> num;
	check(num);
	
}
void check(int num)
{
	int n = num;
	int count=0;
	
	if (num % 2 != 0)
	{
		while (num > 0)
		{

			int digit = num % 2;
			num = num / 2;
			count++;
		}
		palindrome(n);
		/*if (palindrome)
			cout << "YES";
		else
			cout << "NO";*/
		
	}
	else
		cout<< "NO";
}
void palindrome(int num)
{

	int binary[32]; // مصفوفة لتخزين الأرقام الثنائية
	int i = 0;

	// 1. تحويل الرقم لباينري (يدويًا)
	int temp = num;
	while (temp > 0) {
		binary[i] = temp % 2; // بناخد باقي القسمة (0 أو 1)
		temp = temp / 2;      // بنقسم الرقم على 2
		i++;
	}

	// ملاحظة: الرقم متخزن دلوقتي في المصفوفة "معكوس" 
	// بس ده مش هيفرق معانا في فحص الـ Palindrome

	// 2. فحص هل هو Palindrome (يدويًا)
	// هنقارن أول عنصر بآخر عنصر، والتاني باللي قبل الأخير وهكذا
	bool isPalindrome = true;
	int left = 0;      // بداية المصفوفة
	int right = i - 1; // نهاية المصفوفة (آخر رقم باينري اتكتب)

	while (left < right) {
		if (binary[left] != binary[right]) {
			isPalindrome = false;

			break; // لو لقينا اختلاف واحد نخرج فوراً
		}
		left++;
		right--;
	}

	if (isPalindrome)
		cout << "YES";
	else
		cout << "NO";

}
        