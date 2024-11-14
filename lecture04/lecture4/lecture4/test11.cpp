#include <iostream>

using namespace std;

int fibo(int n);

int main()
{
    int n = 5;
    int a = fibo(n);

    cout << "fibo (" << n << ") 의 값은" << endl;
    cout << a << endl;

}


int fibo(int n) {

    if (n == 0) 
    {
        return 0;       //첫째 항, 종료조건
    }

    else if (n == 1) 
    {
        return 1;       //둘째 항, 종료조건
    }

    else
        return fibo(n-1 )   +   fibo(n - 2);   // 재귀적 특성 활용


}



