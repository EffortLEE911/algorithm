
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> phone_book = { "119", "97674223", "1195524421" };
    

    // =============================프로그래머스에 입력================
    bool answer = true;
    
    unordered_map<string, int> hash;

    for (int i = 0; i < phone_book.size(); i++) // hash의 key값에 phone_book 넣기
    {
        hash[phone_book[i]] = 1;
    }

    for (int i = 0; i < phone_book.size(); i++) {
        string number = "";

        for (int j = 0; j < phone_book[i].size(); j++) {
            number = number + phone_book[i][j];
            
            if (hash[number] && (phone_book[i] != number))
                answer = false;
        }
    }


    return answer;
    //================================================================
}

