// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string answer = "";
    string phone_number = "027778888";

    //cout << phone_number.length(); // phone_number의 길이를 구하기 string.length();

    //================프로그래머스 창에 복사 붙혀넣기 하기 (정답)===================
    int start = phone_number.length() - 4; 

    for (int i = 0; i < phone_number.length()-4; i++) 
    {
        answer = answer + "*";

    }

    for (int i = 0; i < 4; i++) 
    {
        answer = answer + phone_number[start];
        start++;

    }

    //=========================================================================================

    cout << answer << endl;




}


