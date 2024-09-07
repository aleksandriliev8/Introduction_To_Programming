#include <iostream>
using namespace std;


//Task1

//void spiralMatrix(int** matrix, int size, int& acc, int n)
//{
//    int row = 0, col = 0;
//    int maxRow = size - 1, maxCol = size - 1;
//
//    while (acc <= n)
//    {
//        // Move from left to right
//        for (int i = col; i <= maxCol && acc <= n; i++)
//        {
//            matrix[row][i] = acc++;
//        }
//        row++;
//
//        // Move from top to bottom
//        for (int i = row; i <= maxRow && acc <= n; i++)
//        {
//            matrix[i][maxCol] = acc++;
//        }
//        maxCol--;
//
//        // Move from right to left
//        for (int i = maxCol; i >= col && acc <= n; i--)
//        {
//            matrix[maxRow][i] = acc++;
//        }
//        maxRow--;
//
//        // Move from bottom to top
//        for (int i = maxRow; i >= row && acc <= n; i--)
//        {
//            matrix[i][col] = acc++;
//        }
//        col++;
//    }
//}


//Task2

//void buildMatrix(int** matrix, int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (i == j)
//            {
//                matrix[i][j] = i;
//            }
//
//            else if (i < j)
//            {
//                matrix[i][j] = j - i;
//            }
//            
//            else
//            {
//                matrix[i][j] = i * j;
//            }
//        }
//    }
//}


//Task3

//void pathToObject(int** room, int rows, int cols, int curI, int curJ, int searchedNumber)
//{
//    int searchedI = -1;
//    int searchedJ = -1;
//
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            if (room[i][j] == searchedNumber)
//            {
//                searchedI = i;
//                searchedJ = j;
//            }
//        }
//    }
//
//    while (curJ != searchedJ)
//    {
//        if (curJ < searchedJ)
//        {
//            curJ++;
//            cout << curI << ", " << curJ << endl;
//        }
//        else
//        {
//            curJ--;
//            cout << curI << ", " << curJ << endl;
//        }
//    }
//
//    while (curI != searchedI)
//    {
//        if (curI < searchedI)
//        {
//            curI++;
//            cout << curI << ", " << curJ << endl;
//        }
//        else
//        {
//            curI--;
//            cout << curI << ", " << curJ << endl;
//        }
//    }
//}

int main()
{
    //Task1

    /*int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Please, enter valid positive number number!" << endl;
    }
    else if (n == 0)
    {
        return n;
    }
    else
    {
        int size = 3;

        while (size * size < n)
        {
            size++;
        }

        int** matrix = new int*[size];

        for (int i = 0; i < size; i++)
        {
            matrix[i] = new int[size];
            for (int j = 0; j < size; j++)
            {
                matrix[i][j] = 0;
            }
        }

        int acc = 1;
        spiralMatrix(matrix, size, acc, n);

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 0; i < size; i++)
        {
            delete[] matrix[i];
        }

        delete[] matrix;

    }*/


    //Task2

    /*int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    int** matrix = new int* [size];

    for (int i = 0; i < size; i++)
    {
        matrix[i] = new int[size];
    }

    buildMatrix(matrix, size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;*/


    //Task3

    /*int rows, cols;

    cout << "Enter the size of your room: ";
    cin >> rows >> cols;

    int** room = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        room[i] = new int[cols];
    }

    cout << "Enter your room: ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> room[i][j];
        }
    }

    int curI, curJ;
    cout << "Enter your starting position: ";
    cin >> curI >> curJ;

    int row1 = -1;
    int col1 = -1;
    int row2 = -1;
    int col2 = -1;
    int row3 = -1;
    int col3 = -1;
    


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (room[i][j] == 1)
            {
                row1 = i;
                col1 = j;
            }
            if (room[i][j] == 2)
            {
                row2 = i;
                col2 = j;
            }
            if (room[i][j] == 3)
            {
                row3 = i;
                col3 = j;
            }
        }
    }

    if (row1 == - 1 || col1 == -1 || row2 == -1 || col2 == -1 || row3 == -1 || col3 == -1)
    {
        cout << "The room is incomplete" << endl;
    }
    else
    {
        cout << curI << ", " << curJ << endl;

        if (row1 != -1 && col1 != -1)
        {
            pathToObject(room, rows, cols, curI, curJ, 1);
        }
        if (row2 != -1 && col2 != -1)
        {
            pathToObject(room, rows, cols, row1, col1, 2);
        }
        if (row3 != -1 && col3 != -1)
        {
            pathToObject(room, rows, cols, row2, col2, 3);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] room[i];
    }

    delete[] room;*/
}
