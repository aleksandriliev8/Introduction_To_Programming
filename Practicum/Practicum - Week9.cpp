#include <iostream>
using namespace std;

//Task1

void notNegativeNumbersAboveTheDiagonal(int** matrix, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i < j && matrix[i][j] >= 0)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

int main()
{
    //Task1

    int size;
    cout << "Enter size of the matrix: ";
    cin >> size;


    int** matrix = new int* [size];

    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }

    cout << "Enter the matrix: " << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }

    notNegativeNumbersAboveTheDiagonal(matrix, size);

    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}
