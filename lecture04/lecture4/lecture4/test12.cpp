#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> phone_book = { "119", "97674223", "1195524421" };

    bool answer = true;

    unordered_map<string, int> hash;

    for (int i = 0; i < phone_book.size(); i++)
    {
        hash[phone_book[i]] = 1;   // hash에 phone_book 넣기
    }

    for (int i = 0; i < phone_book.size(); i++) 
    {
        string number = "";                                 // 비어있는 number 변수 만들기.

        for (int j = 0; j < phone_book[i].size(); j++) {

            number = number + phone_book[i][j];             // number 변수를 활용해 
                                                            // phone_book의 문자열을 한칸한칸 비교하기

            if (hash[number] && (phone_book[i] != number))  // number 변수가 접두어인지 확인하는 로직 

                answer = false;
        }
    }

    cout << answer << endl;

}

