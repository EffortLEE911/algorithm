
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;

    unordered_map<string, int> hash;

    for (int i = 0; i < phone_book.size(); i++)
    {
        hash[phone_book[i]] = 1;
    }

    string number = "";
    string tmp = "";

    for (int i = 0; i < phone_book.size(); i++)
    {
        tmp = phone_book[i];

        number = ""; //빈 문자열 number 만들기.

        for (int j = 0; j < tmp.size(); j++)
        {
            number = number + tmp[j]; // 문자열을 하나하나 더해가면서 hash에 존재하는지 체크

            if ((hash[number]) && (tmp != number)) //현재 비교하고 있는 문자열이 아니면서, hash[문자열]을 탐색했을 때 없어야한다.
            {
                answer = false;
                return answer;
            }
        }
    }


    return answer;
}

int main()
{

    vector<string> phone_book = { "12", "123", "1235", "567", "88" };

    cout << solution(phone_book) << endl;

}
