#include <iostream>
using namespace std;

int numberOfDigits(int num, int i)
{
	while (num > 0)
	{
		i++;
		num /= 10;
	}

	return i;
}

bool isContained(int num1, int num2)
{
	int copyNum2 = num2;

	while (num1 > 0)
	{
		if (num2 > 0)
		{
			if (num1 % 10 != num2 % 10)
			{
				num1 /= 10;
				num2 /= 10;
			}
			else
			{
				num1 /= 10;
				num2 = copyNum2;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

int main()
{
	//Task1

	//int num = 100;

	//while (num < 1000)
	//{
	//	if (num % 10 != (num / 10) % 10 && num % 10 != num / 100 && (num / 10) % 10 != num / 100)
	//{
	//	cout << num << ", ";
	//	num++;
	//}

	//	else
	//	{
	//		num++;
	//	}
	//}

	// Task2


	/*int num;
	cout << "Enter a number: ";
	cin >> num;

	int sumPositiveDividors = 0;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sumPositiveDividors += i;
		}
	}

	if (sumPositiveDividors == num) cout << "True"; else cout << "False";*/


	//Task3
	//Must be finished

	//int num;
	//cout << "Enter a num: ";
	//cin >> num;

	//int sum = 0;
	//int copyNum = num;

	//while (num > 0)
	//{
	//	sum += (num % 10) ^ (numberOfDigits(num, 0));
	//	num /= 10;
	//}

	//if (sum == copyNum) cout << "true";
	//else cout << "false";

	//cout << sum;

	//Task4


	//int num1, num2;
	//cout << "Enter number one: ";
	//cin >> num1;
	//cout << "Enter number two: ";
	//cin >> num2;

	//cout << boolalpha << isContained(num1, num2) << endl;

	//Task 5

	/*int n, k;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter k: ";
	cin >> k;

	int counter = 0;

	while (n > 0)
	{
		if ((n % 10) % k == 0)
		{
			counter++;
		}

		n /= 10;
	}

	cout << counter << endl;*/

	//Task6

	//int money;
	//cout << "Enter a value: ";
	//cin >> money;

	//int numberOfPapers = 0;

	//while (money > 0)
	//{
	//	if (money >= 100)
	//	{
	//		numberOfPapers += money / 100;
	//		money %= 100;
	//	}

	//	else if (money >= 50)
	//	{
	//		numberOfPapers += money / 50;
	//		money %= 50;
	//	}

	//	else if (money >= 20)
	//	{
	//		numberOfPapers += money / 20;
	//		money %= 20;
	//	}

	//	else if(money >= 10)
	//	{
	//		numberOfPapers += money / 10;
	//		money %= 10;
	//	}

	//	else if (money >= 5)
	//	{
	//		numberOfPapers += money / 5;
	//		money %= 5;
	//	}

	//	else if (money >= 2)
	//	{
	//		numberOfPapers += money / 2;
	//		money %= 2;
	//	}

	//	else
	//	{
	//		numberOfPapers += money;
	//		break;
	//	}
	//}


	//cout << numberOfPapers << endl;


	// Task7

	//int n;
	//cout << "Enter a number: ";
	//cin >> n;

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j <= i; j++)
	//	{
	//		cout << "\#";
	//	}
	//	cout << endl;
	//}


	//Task8

	//int n;
	//cout << "Enter a number: ";
	//cin >> n;

	//int currNum = 1;

	//for (int i = 0; currNum <= n ; i++)
	//{
	//	if (currNum == n)
	//	{
	//		cout << currNum << endl;
	//		break;
	//	}

	//	for (int j = 0; j < i ; j++)
	//	{
	//		if (currNum == n)
	//		{
	//			cout << currNum;
	//			break;
	//		}

	//		cout << currNum << " ";
	//		currNum++;
	//	}

	//	
	//}

	
	// Task9

	//int n;
	//cout << "Enter a number: ";
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 0; j < i - 1; j++)
	//	{
	//		cout << " ";
	//	}

	//	for (int k = i; k <= n; k++)
	//	{
	//		cout << k;
	//	}

	//	cout << endl;
	//}

	//for (int i = n - 1; i >= 1; i--) 
	//{
	//	for (int j = 0; j < i - 1; j++) 
	//	{
	//		cout << " ";
	//	}

	//	for (int k = i; k <= n; k++) 
	//	{
	//		cout << k;
	//	}

	//	cout << endl;
	//}
}