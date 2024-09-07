#include <iostream>
using namespace std;


//Task1

int max(int x, int y)
{
	if (y > x)
	{
		return y;
	}
	else
	{
		return x;
	}
}

//Task2

double newPrice(double price, double percent)
{
	double newPrice;

	newPrice = price - price * (percent / 100);

	return newPrice;
}

//Task3

bool isLetter(char s)
{
	if (s > 64 && s < 91 || s > 96 && s < 122)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Task4

bool isDigit(char s)
{
	if (s > 47 && s < 58)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Task5.1 

int pow(int x, int y)
{
	int result = 1;

	for (int i = 0; i < y; i++)
	{
		result *= x;
	}
	return result;
}

//Task5.2

int sqrt(int x)
{
	for (int i = 1; i < x; i++)
	{
		if (i * i == x)
		{
			return i;
		}
	}

	return -1
;
}

//Task7 

int digitsSum(int n)
{
	int sum = 0;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

// Task8

int DecToBin(int n)
{
	int acc = 1;
	int result = 0;

	while (n > 0)
	{
		result += acc * (n % 2);
		acc *= 10;
		n /= 2;
	}

	return result;
}

int main()
{
    //Task1

	//int x, y;
	//cout << "Enter number 1: ";
	//cin >> x;
	//cout << "Enter number 2: ";
	//cin >> y;

	//cout << max(x, y);


	//Task2

	//double price, percent;
	//cout << "Enter starting price: ";
	//cin >> price;
	//cout << "Enter percentages: ";
	//cin >> percent;

	//cout << newPrice(price, percent);


	//Task3

	//char s;
	//cout << "Enter a symbol: ";
	//cin >> s;

	//cout << boolalpha << isLetter(s) << endl;


	//Task4

	//char s;
	//cout << "Enter a symbol: ";
	//cin >> s;

	//cout << boolalpha << isDigit(s) << endl;


	//Task5.1

	//int x, y;
	//cout << "Enter number 1: ";
	//cin >> x;
	//cout << "Enter number 2: ";
	//cin >> y;

	//cout << pow(x, y) << endl;


	//Task5.2
	// 
	//int x, y;
	//cout << "Enter a number: ";
	//cin >> x;

	//cout << sqrt(x) << endl;


	//Task6

	//int x, y, z;
	//cout << "Enter sides: ";
	//cin >> x >> y >> z;

	//if (x + y > z)
	//{
	//	if (x * x + y * y == z * z)
	//	{
	//		cout << "Right-angled triangle" << endl;
	//	}
	//	else if (x * x + y * y > z * z)
	//	{
	//		cout << "Acute-angled triangle" << endl;
	//	}
	//	else
	//	{
	//		cout << "Obtuse-angled triangle" << endl;
	//	}
	//}
	//else
	//{
	//	cout << "There is no such triangle!" << endl;
	//}


	//Task7

	//int n;
	//cout << "Enter a number: ";
	//cin >> n;

	//cout << digitsSum(n) << endl;


	//Task8

	//int n;
	//cout << "Enter a decimal number: ";
	//cin >> n;

	//cout << "Binary record: " << DecToBin(n) << endl;
}

