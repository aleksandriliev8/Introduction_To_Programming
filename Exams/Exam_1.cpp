#include <iostream>
using namespace std;

//Task1.1

int factoriel(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factoriel(n - 1);
    }
}

//Task1.2

int numberOfNotNegativeNumbers(int n)
{
    int counter = 0;

    while (n != 0)
    {
        if (abs(n) % 2 == 0 && n < 0 && abs(n) % 10 == 6)
        {
            break;
        }

        else if (n >= 0)
        {
            counter++;
        }

        cin >> n;
    }

    if (n == 0)
    {
        return counter + 1;
    }
    else
    {
        return counter;
    }
}


//Task2

void romanNotationOfNumber(int n, int a, int b)
{
    while (n <= b)
    {
        if (n >= 1 && n <= 9)
        {
            switch (n)
            {
            case 1: 
                cout << "I" << ", ";
                break;
            case 2: 
                cout << "II" << ", ";
                break;
            case 3: 
                cout << "III" << ", ";
                break;
            case 4: 
                cout << "IV" << ", ";
                break;
            case 5: 
                cout << "V" << ", ";
                break;
            case 6: 
                cout << "VI" << ", ";
                break;
            case 7: 
                cout << "VII" << ", ";
                break;
            case 8: 
                cout << "VIII" << ", ";
                break;
            case 9: 
                cout << "IX" << ", ";
                break;
            default:
                break;
            }
        }
        else
        {
            if (n == b)
            {
                cout << n * n << endl;
            }

            else
            {
                cout << n * n << ", ";
            }
        }

        n++;
    }
}


//Task3

bool ifSidesOfRombAreEven(int** matrix, int size)
{
    // Up side peak check
    if (matrix[0][size / 2] % 2 != 0)
    {
        return false;
    }

    // Between up and left check
    for (int i = 0; i < size / 2; i++)
    {
        if (matrix[i][size / 2 - i] % 2 != 0)
        {
            return false;
        }
    }

    // Left side peak check
    if (matrix[size / 2][0] % 2 != 0)
    {
        return false;
    }

    // Between left and down side check
    for (int i = size / 2 + 1; i < size; i++)
    {
        if (matrix[i][i - size / 2] % 2 != 0)
        {
            return false;
        }
    }

    // Right side peak check
    if (matrix[size / 2][size - 1] % 2 != 0)
    {
        return false;
    }

    // Between right and down side check
    for (int i = size / 2 + 1; i < size; i++)
    {
        if (matrix[i][size - 1 - i + size / 2] % 2 != 0)
        {
            return false;
        }
    }

    // Down side peak check
    if (matrix[size - 1][size / 2] % 2 != 0)
    {
        return false;
    }

    // Between right and up side check
    for (int i = 1; i < size / 2; i++)
    {
        if (matrix[i][size / 2 + i] % 2 != 0)
        {
            return false;
        }
    }

    return true;

}

int main()
{
    //Task1

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << factoriel(n) << endl;

    //Task2

    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << numberOfNotNegativeNumbers(n) << endl;


    //Task2

    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int n = a;

    if (a > b)
    {
        cout << "Error: a is bigger than b!" << endl;
    }
    else if (a > 0 && b > 0)
    {
        romanNotationOfNumber(n, a, b);
    }
    else
    {
        cout << "The two numbers aren't positive!" << endl;
    }


    //Task3

    int size;
    cout << "Enter size of the matrix (3 or higher number): ";
    cin >> size;

    if (size < 3)
    {
        cout << "The number is lower than 3!" << endl;
    }
    else
    {
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

        cout << boolalpha << ifSidesOfRombAreEven(matrix, size) << endl;


        for (int i = 0; i < size; i++)
        {
            delete[] matrix[i];
        }

        delete[] matrix;

    }
}
