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
        hash[phone_book[i]] = 1;   // hash�� phone_book �ֱ�
    }

    for (int i = 0; i < phone_book.size(); i++) 
    {
        string number = "";                                 // ����ִ� number ���� �����.

        for (int j = 0; j < phone_book[i].size(); j++) {

            number = number + phone_book[i][j];             // number ������ Ȱ���� 
                                                            // phone_book�� ���ڿ��� ��ĭ��ĭ ���ϱ�

            if (hash[number] && (phone_book[i] != number))  // number ������ ���ξ����� Ȯ���ϴ� ���� 

                answer = false;
        }
    }

    cout << answer << endl;

}

