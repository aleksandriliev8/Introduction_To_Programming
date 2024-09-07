#include <iostream>
using namespace std;

int main()
{
	int num = 100;

	while (num < 1000)
	{
		if (num % 10 != (num / 10) % 10 && num % 10 != num / 100 && (num / 10) % 10 != num / 100)
		{
			cout << num << ", ";
			num++;
		}

		else
		{
			num++;
		}
	}
}