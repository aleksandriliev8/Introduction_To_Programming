#include <iostream>
using namespace std;

//Task1

//void swapValues(int *x, int *y)
//{
//    int temp = *x;
//
//    *x = *y;
//    *y = temp;
//}

//Task2

//bool increasingElements(int* arr, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (i + 1 == size)
//        {
//            return true;
//        }
//
//        else if (arr[i] > arr[i + 1])
//        {
//            return false;
//        }
//    }
//}

//Task3

//void reverse(int* arr, int size)
//{
//    for (int i = 0; i < size / 2; i++)
//    {
//        int temp = arr[i];
//        arr[i] = arr[size - i - 1];
//        arr[size - i - 1] = temp;
//    }
//}


//Task4

//void sortArray(int* arr, int size)
//{
//    for (int i = 0; i < size - 1 - i; i++)
//    {
//        for (int j = 0; j < size - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int  temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}

//Task5

//void mergeArrays(int* arr1, int size1, int* arr2, int size2, int* resultArray) {
//    int i = 0, j = 0, k = 0;
//
//    while (i < size1 && j < size2) 
//    {
//        if (arr1[i] < arr2[j]) 
//        {
//            resultArray[k++] = arr1[i++];
//        }
//        else 
//        {
//            resultArray[k++] = arr2[j++];
//        }
//    }
//
//    while (i < size1) 
//    {
//        resultArray[k++] = arr1[i++];
//    }
//
//    while (j < size2) 
//    {
//        resultArray[k++] = arr2[j++];
//    }
//}


//Task6

//void transposeMatrix(const int* sourceMatrix, int* transposedMatrix, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) 
//    {
//        for (int j = 0; j < cols; ++j) 
//        {
//            // За транспониране на матрицата, разменяме индексите i и j при копирането на елементите
//            transposedMatrix[j * rows + i] = sourceMatrix[i * cols + j];
//        }
//    }
//}

int main()
{
    //Task1

    /*int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    swapValues(&x, &y);

    cout << "New x is: " << x << endl;
    cout << "New y is: " << y << endl;*/


    //Task2

    /*int size;
    cout << "Enter size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << boolalpha << increasingElements(arr, size);

    delete[] arr;*/


    //Task3

    /*int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;*/


    //Task4

    /*int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sortArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;*/


    //Task5

    //int size1, size2;
    //cout << "Enter size of 1st array: ";
    //cin >> size1;

    //int* arr1 = new int[size1];

    //cout << "Enter the array: ";
    //for (int i = 0; i < size1; i++)
    //{
    //    cin >> arr1[i];
    //}

    //cout << "Enter size of 2nd array: ";
    //cin >> size2;

    //int* arr2 = new int[size2];

    //for (int i = 0; i < size2; i++)
    //{
    //    cin >> arr2[i];
    //}

    //sortArray(arr1, size1);
    //sortArray(arr2, size2);

    //int* resultArray = new int[size1 + size2];

    //mergeArrays(arr1, size1, arr2, size2, resultArray);

    //cout << "Merged and sorted array: ";

    //for (int i = 0; i < size1 + size2; i++) 
    //{
    //    cout << resultArray[i] << " ";
    //}

    //cout << endl;

    //delete[] arr1;
    //delete[] arr2;
    //delete[] resultArray;

    
    //Task6

    /*int rows, cols;
    cout << "Enter the number of rows of the matrix: ";
    cin >> rows;

    cout << "Enter the number of cols of the matrix: ";
    cin >> cols;

    int** arr = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout << "Enter the matrix: " << endl;;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    printTransportedMatrix(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/
}

