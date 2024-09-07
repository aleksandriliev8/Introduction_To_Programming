#include <iostream>
using namespace std;

int main()
{
    //Task1

    int n;
    cin >> n;

    int fst, snd, thrd, sum;

    thrd = n % 10;
    snd = (n / 10) % 10;
    fst = (n / 100);

    sum = fst + snd + thrd;

    cout << n << " first digit:" << fst << " second digit:" << snd << " third digit:" << thrd << " sum:" << sum;


    //Task2

    int a, b;
    cin >> a >> b;

    a = b + a;
    b = a - b;
    a = a - b;

    cout << a << " " << b;



    //Task3

    int a, b, prod, lastDprod;
    cin >> a >> b;

    prod = a * b;
    lastDprod = prod % 10;

    bool isEven = lastDprod % 2 == 0;

    cout << prod << " " << lastDprod << " " << boolalpha << isEven;


    //Task4

    int a, b, c;
    int d;
    int x1, x2;
    cin >> a >> b >> c;

    d = sqrt (b * b - 4 * a * c);
    x1 = (-b + d) / 2 * a;
    x2 = (-b - d) / 2 * a;

    cout << "x1 = " << x1 << " " << "x1 = " << x2 ;
}

