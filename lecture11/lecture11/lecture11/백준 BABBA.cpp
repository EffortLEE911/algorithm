#include <iostream>

using namespace std;

int main()
{
    int a[46];
    int b[46];

    a[0] = 1;
    b[0] = 0;

    a[1] = 0;
    b[1] = 1;

    a[2] = 1;
    b[2] = 1;

    a[3] = 1;
    b[3] = 2;

    for (int i = 4; i < 46; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    int K = 0;
    cin >> K;

    cout << a[K] << " " << b[K];
}