#include <iostream>
using namespace std;

//Task7
bool noOneWins(int** arr)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
                return false;
            }
        }
    }

    return true;
}

bool someOneWins(int** arr, int playerI, int playerJ)
{
    int checkMoves[8][2] = { {-1, -1}, {-1, 0}, {0, -1}, {1, -1}, {0, 1}, {1, 0}, {1, 1}, {-1, 1} };

    for (int i = 0; i < 8; i++)
    {
        int consecutiveCount = 1;

        for (int direction = -1; direction <= 1; direction += 2)
        {
            int checkI = playerI + checkMoves[i][0] * direction;
            int checkJ = playerJ + checkMoves[i][1] * direction;

            while (checkI >= 0 && checkI < 3 && checkJ >= 0 && checkJ < 3 && arr[checkI][checkJ] == arr[playerI][playerJ])
            {
                consecutiveCount++;
                checkI += checkMoves[i][0] * direction;
                checkJ += checkMoves[i][1] * direction;
            }
        }

        if (consecutiveCount >= 3)
        {
            return true;
        }
    }

    return false;
}


int main()
{
    //Task1

    /*double size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    int** arr = new int*[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix " << size << " x " << size << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum += arr[i][j];
        }
    }

    cout << "Sum of matrix elements: " << sum << ", average of matrix elements: " << sum / (size * size);

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/


    //Task2

    /*int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix " << size << " x " << size << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    bool meetsTheRequirements = true;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                if (arr[i][j] % 3 == 0)
                {
                    sum += arr[i][j] / 3;
                }
                else
                {
                    meetsTheRequirements = false;
                    break;
                }
            }

            if (i > j)
            {
                if (arr[i][j] % 2 == 0)
                {
                    sum += arr[i][j] / 2;
                }
                else
                {
                    meetsTheRequirements = false;
                    break;
                }
            }

            if (i < j)
            {
                if (arr[i][j] % 4 == 0)
                {
                    sum += arr[i][j] / 4;
                }
                else
                {
                    meetsTheRequirements = false;
                    break;
                }
            }
        }
    }

    if (meetsTheRequirements == true)
    {
        cout << sum << endl;
    }
    else
    {
        cout << "Elements does not meet the requirements." << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/


    //Task3

    /*int size;
    cout << "Enter size of matrix: ";
    cin >> size;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix " << size << " x " << size << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool areColAndRowEqual = true;
    bool atLeastOneColAndRow = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                areColAndRowEqual = false;
            }
        }

        if (areColAndRowEqual == true)
        {
            cout << i << endl;
            atLeastOneColAndRow = true;
        }

        else
        {
            areColAndRowEqual = true;
        }
    }

    if (atLeastOneColAndRow == false)
    {
        cout << "There are no equal rows and cols" << endl;
    }

    for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/


    //Task4 - Doesnt work properly (need help)

    /*int size;
    cout << "Enter size of the matrix: ";
    cin >> size;

    int** arr = new int* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix " << size << " x " << size << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool rowMeetsRequirments = true;
    bool elemContains = false;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = i + 1; k < size; k++)
            {
                if (arr[i][j] == arr[k][j])
                {
                    elemContains = true;
                    break;
                }
            }

            if (elemContains)
            {
                elemContains = false;
            }
            else
            {
                rowMeetsRequirments = false;
                break;
            }
        }

        if (rowMeetsRequirments == false && i + 2 == size)
        {
            break;
        }

        if (rowMeetsRequirments == false)
        {
            rowMeetsRequirments = true;
        }

        else
        {
            break;
        }

    }
    cout << boolalpha << rowMeetsRequirments << endl;*/


    //Task5

    /*int size;
    cout << "Enter size of the matrix: ";
    cin >> size;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    cout << "Enter the matrix with size " << size << " x " << size << ":" << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowsOfset, colsOfset;
    cout << "Enter the ofset of the rows: ";
    cin >> rowsOfset;

    cout << "Enter the ofset of the columns: ";
    cin >> colsOfset;


    if (rowsOfset > size)
    {
        rowsOfset %= size;
    }

    if (colsOfset > size)
    {
        colsOfset %= size;
    }*/

    //Rows ofset

    /*for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int temp = arr[i][j];

            arr[i][j] = arr[i + 1][j];
            arr[i + 1][j] = temp;
        }

        rowsOfset--;

        if (rowsOfset == 0)
        {
            break;
        }
    }*/

    //Cols ofset

    /*for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            int copyColOfs = colsOfset;
            int temp = arr[i][j];
            arr[i][j] = arr[i][j + 1];
            arr[i][j + 1] = temp;

            copyColOfs--;

            if (copyColOfs == 0)
            {
                break;
            }
        }
    }*/

    //Printing the new matrix

    /*for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }*/


    //Deleting the matrix

    /*for (int i = 0; i < size; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;*/


    //Task6

    /*int** arr = new int* [8];

    for (int i = 0; i < 8; i++)
    {
        arr[i] = new int[8];
    }

    cout << "Enter the chessboard: " << endl;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    int knightI, knightJ;
    cout << "Enter the position of the knight: ";
    cin >> knightI >> knightJ;

    if (knightI >= 0 && knightI < 8 && knightJ >= 0 && knightJ < 8)
    {
        int possibilitiesCounter = 0;

        int moves[8][2] = { {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {-2, -1}, {-2, 1}, {2, -1}, {2, 1} };

        for (int i = 0; i < 8; i++)
        {
            int newI = knightI + moves[i][0];
            int newJ = knightJ + moves[i][1];

            if (newI >= 0 && newI < 8 && newJ >= 0 && newJ < 8)
            {
                if (arr[newI][newJ] == 1)
                {
                    possibilitiesCounter++;
                }
            }
        }

        cout << "There are " << possibilitiesCounter << " possible moves." << endl;
    }

    else
    {
        cout << "Invalid positions of the knight" << endl;
    }

    delete[] arr;*/


    //Task7    

    int** arr = new int* [3];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = new int[3];
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 0;
        }
    }

    int playerI;
    int playerJ;
    int counter = 1;

    while (!noOneWins(arr))
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;

        if (counter % 2 == 1)
        {
            cout << "Player 1, it's your turn!" << endl;
        }
        else
        {
            cout << "Player 2, it's your turn!" << endl;
        }

        cin >> playerI >> playerJ;
        cout << endl;

        if (playerI < 0 || playerI > 2 || playerJ < 0 || playerJ > 2)
        {
            while (playerI < 0 || playerI > 2 || playerJ < 0 || playerJ > 2)
            {
                cout << "Wrong input! Choose coordinates from the board." << endl;
                cin >> playerI >> playerJ;
                cout << endl;
            }
        }

        if (arr[playerI][playerJ] != 0)
        {
            while (arr[playerI][playerJ] != 0)
            {
                cout << "This field is already taken! Choose another one." << endl;
                cin >> playerI >> playerJ;
                cout << endl;
            }
        }

        if (counter % 2 == 1)
        {
            arr[playerI][playerJ] = 1;
        }
        else
        {
            arr[playerI][playerJ] = 2;
        }

        playerI = playerI;
        playerJ = playerJ;

        counter++;

        if (someOneWins(arr, playerI, playerJ))
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }

            int winningPlayer = arr[playerI][playerJ];
            cout << "Player " << winningPlayer << " wins! Congratulations!" << endl;
            break;
        }
    }

    if (noOneWins(arr) && !someOneWins(arr, playerI, playerJ))
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        cout << "It's draw! Play again?" << endl;
    }
}