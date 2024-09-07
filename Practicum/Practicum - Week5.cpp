#include <iostream>
using namespace std;

//Task 9

//int averageOfCol(int** arr, int k, int col, double rows)
//{
//    double sum = 0;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            if (j == k)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//
//    return sum / rows;
//}


int main()
{
    //Task 1

   /* int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int secondMax = arr[0];
    int secondMin = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }

        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }

        if (arr[i] < min)
        {
            secondMin = min;
            min = arr[i];
        }
        else if (arr[i] < secondMin && arr[i] != min)
        {
            secondMin = arr[i];
        }
    }

    cout << "max: " << max << " min: " << min << " second max: " << secondMax << " second min: " << secondMin << endl;

    delete[] arr;*/


    //Task2


    /*int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];

    bool areAllDifferent = true;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                areAllDifferent = false;
            }
        }
    }

    cout << boolalpha << areAllDifferent;

    delete[] arr;*/


    //Task3

    /*int size;
    cout << "Enter size: ";
    cin >> size;

    cout << "Enter array: ";

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int counter = 0;
    int indexesCount = 0;

    int* indexes = new int[1024];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            counter++;
            indexes[indexesCount] = i;
            indexesCount++;
        }
    }

    cout << n << " is present " << counter << " times in the array";

    if (counter > 0)
    {
        cout << " at positions ";

        for (int i = 0; i < indexesCount; i++)
        {
            if (i == indexesCount - 1)
            {
                cout << indexes[i] << endl;
            }

            else
            {
                cout << indexes[i] << ", ";
            }
        }
    }

    delete[] arr;

    delete[] indexes;*/


    //Task4

    /*double size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    double average = sum / size;

    int temp = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (abs(average - arr[i]) < abs(average - temp))
        {
            temp = arr[i];
        }

        else if (abs(average - arr[i]) == abs(average - temp))
        {
            if (temp > arr[i])
            {
                temp = arr[i];
            }
        }
    }

    cout << "The closest element to the average of the array: " << temp << endl;

    delete[] arr;*/
    

    //Task5

    /*int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bool isArrayMirror = true;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            isArrayMirror = false;
        }

        if (i == size / 2)
        {
            break;
        }
    }

    cout << boolalpha << isArrayMirror << endl;

    delete[] arr;*/


    //Task6


    /*int n;
    cout << "Enter the size: ";
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int* reversed = new int[n];
    int counterIndex = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        reversed[n - i - 1] = arr[i];
        counterIndex++;
    }

    cout << "Reversed array is: ";

    for (int i = 0; i < counterIndex; i++)
    {
        cout << reversed[i] << " ";
    }

    delete[] arr;
    delete[] reversed;*/

    //Task7

    /*int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter array: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;*/


    //Task8

    /*int size;
    cout << "Enter size: ";
    cin >> size;

    cout << "The matrix is " << size << " x " << size << endl;

    int** arr = new int*[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix: " << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    int headDiagonalSum = 0;
    int secondDiagonalSum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                headDiagonalSum += arr[i][j];
            }

            if (size - i - 1 == j)
            {
                secondDiagonalSum += arr[i][j];
            }
        }
    }

    cout << "Main diagonal is " << headDiagonalSum << ", second is " << secondDiagonalSum << endl;

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/

    
    //Task9

   /* int rows, col;
    cout << "Enter rows size: ";
    cin >> rows;
    cout << "Enter columns size: ";
    cin >> col;*/

    // Create the matrix
    /*int** arr = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];
    }*/

    //Enter the matrix in console
    /*cout << "Enter the matrix with sizes " << rows << " x " << col << " : " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }*/

    //Task algoritm

    /*int seekedIndex = 0;
    double maxAverage = 0.0;

    for (int j = 0; j < col; j++) 
    {
        double currentAverage = averageOfCol(arr, j, col, rows);

        if (currentAverage > maxAverage) 
        {
            maxAverage = currentAverage;
            seekedIndex = j;
        }
    }

    cout << "index = " << seekedIndex << endl;*/

    //Delete the matrix

    /*for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/
}

