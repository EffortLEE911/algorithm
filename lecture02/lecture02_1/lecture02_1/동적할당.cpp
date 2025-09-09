
#include <iostream>

using namespace std;

// 배열 동적할당 하고 실행 도중에 배열 크기 늘리기

int main()
{
    int size =3;
    int* a = (int*)malloc(sizeof(int)* size );

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    for (int i = 0; i < size; i++)
    {
        cout << "i = " << i << ", 값은 : " << a[i] << endl;
    }
    cout << endl;
    cout << "-----------------------------------------------" << endl;
    cin >> size;

    a = (int*)realloc(a, sizeof(int) * size);

    a[3] = 40;
    a[4] = 50;

    for (int i = 0; i < size; i++)
    {
        cout << "i = " << i << ", 값은 : " << a[i] << endl;
    }


    free(a);

}

