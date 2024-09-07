#include <iostream>
using namespace std;

//void printChimney(int n)
//{
//    for (int i = 0; i < n - (n / 2); i++)
//    {
//        cout << "SS" << endl;
//    }
//
//    cout << "--" << endl;
//
//    for (int i = 0; i < n - 2; i++)
//    {
//        cout << "|";
//    }
//}

void downBase(int n)
{
    for (int i = 0; i < n * 2; i++)
    {
        cout << "=";
    }
}

void printWalls(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << "|";

        for (int j = 0; j < n * 2 - 2; j++)
        {
            cout << " ";
        }

        cout << "|" << endl;
    }
}

void upBase(int n)
{
    for (int i = 0; i < n * 2; i++)
    {
        cout << "-";
    }
}

void roofPrint(int n)
{
    int frontSpaces = n - 1;
    int betweenSpaces = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = frontSpaces;  j >= 0;  j--)
        {
            cout << " ";
        }

        cout << "/";
        frontSpaces--;

        for (int k = 0; k < betweenSpaces * 2; k++)
        {
            cout << " ";
        }

        cout << "\\" << endl;
        betweenSpaces++;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    roofPrint(n);
    cout << " ";
    upBase(n);
    cout << endl;
    printWalls(n);
    cout << " ";
    downBase(n);
    //cout << endl;
    //printChimney(n);
}

