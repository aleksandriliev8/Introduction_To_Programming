#include <iostream>
using namespace std;

//Task1

//void printSingleArray(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}


//Task2

void printTwoArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i] << ",";
		}

		cout << endl;
	}
}

int main()
{
	//Task1


 //   int arr[5];
	//int sum = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Enter a number " << i << ": ";
	//	cin >> arr[i];
	//	sum += arr[i];
	//}

	//printSingleArray(arr, sizeof(arr) / 4);
	//cout << endl;
	//cout << "Sum: " << sum << endl;


	//Task2
	int size;
	cout << "Enter size of matrix: ";
	cin >> size;

	int arr[size];
}

