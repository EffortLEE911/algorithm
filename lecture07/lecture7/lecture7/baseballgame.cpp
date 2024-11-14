#include <iostream>
#include <time.h>
#include <string>

using namespace std;

int main()
{
    //=========================================random 값 사용하기===========================================

    //rand()를 쓰는 방법은 좋은 방법은 아니나 다른 방법은 좀 더 까다로워, 간단한 rand()를 사용한 방법으로 난수 생성

    srand(511);  // rand() 의 값이 변할 수 있도록 시드값 바꾸기, 하지만 현재 시간을 사용하여 숫자가 천천히 변하는 단점이 존재.

    int r1 = rand() % 9 + 1;
    int r2 = rand() % 9 + 1;
    int r3 = rand() % 9 + 1;


    while (r1 == r2 || r3 == r2)    //r2 의 값이 같은지
    {
        r2 = rand() % 9 + 1;
    }
    while (r1 == r3 || r2 == r3)
    {
        r3 = rand() % 9 + 1;
    }
 
    string baseball = "";
    baseball = baseball + to_string(r1) + to_string(r2) + to_string(r3);
    
    //========================================================================================
 
    //string baseball = "369";

    string answer = "";

    answer = "123";

    int num_c = 0;

    int strike = 0;
    int ball = 0;
    int out = 3;

    for (int k = 0; k < 10; k++) 
    {

        cin >> answer;

        strike = 0;
        ball = 0;
        out = 3;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (baseball[j] == answer[i])
                {
                    if (i == j) {
                        strike++;
                    }
                    else {
                        ball++;
                    }
                }
            }
        }

        out = out - strike - ball;
        num_c++;
        cout << "당신의 답은? " << answer << endl;
        cout << "strike : " << strike;
        cout << ", ball : " << ball;
        cout << ", out : " << out << endl;
        cout << "횟수 : " << num_c << endl<<endl;

        if (strike == 3)
            break;
    }
    if (strike == 3) {
        cout << "축하합니다 맞췄습니다. 정답은 : " << baseball << endl;
    }
    else {
        cout << "아쉽게 실패했습니다. 정답은 : " << baseball << endl;
    }

    

}

