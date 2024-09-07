#include <iostream>
using namespace std;

//Task3

int main()
{
    char str[] = "FMI2021su";
	int counter = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 64 && str[i] < 91 || str[i] > 96 $$ str[i] < 123)
		{
			counter++;
		}
	}

	cout << counter;
}
