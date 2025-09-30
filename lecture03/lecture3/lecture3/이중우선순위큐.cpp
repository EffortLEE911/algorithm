#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <queue>

using namespace std;



vector<int> solution(vector<string> operations)
{
    vector<int> answer;

    //�ּڰ��� �����ϴ� ������ ���� ��� pq�� min_pq�� �Ű� �ּڰ� ����,
    //�ִ��� �����ϴ� ������ ���� ��� pq�� max_pq�� �Ű� �ִ� �����ϴ� ����.
    priority_queue<int, vector<int>, greater<int>> min_pq;
    priority_queue<int, vector<int>> max_pq;

    string now_pq = "min";

    string s1;
    int s2;


    for (int i = 0; i < operations.size(); i++)
    {
        //istringstream : �Է� ���� ��Ʈ������ ���ڿ��� ��������� ��ūȭ �Ҷ� �����ϴ�.
        //���� ��Ȳ������ �ݵ�� ����� �ʿ�� ������ ���ڿ� �ٷ� �� �����ؼ� �˾Ƶθ� ����.
        istringstream iss(operations[i]);

        iss >> s1 >> s2;

        if (s1 == "I")
        {
            if (now_pq == "min")
            {
                min_pq.push(s2);
            }
            else
            {
                max_pq.push(s2);
            }
        }
        else if (s1 == "D" && (!max_pq.empty() || !min_pq.empty())) //���� priority queue�� ���� �ϳ��� ������ �� pop()������ �����Ѵ�.
        {
            if (s2 == -1)
            {
                if (now_pq == "max")
                {
                    while (!max_pq.empty())
                    {
                        min_pq.push(max_pq.top());
                        max_pq.pop();
                    }
                }
                min_pq.pop();
                now_pq = "min";

            }
            else if (s2 == 1)
            {
                if (now_pq == "min")
                {
                    while (!min_pq.empty())
                    {
                        max_pq.push(min_pq.top());
                        min_pq.pop();
                    }
                }
                max_pq.pop();
                now_pq = "max";

            }
        }
    }

    //���� ����� ������ִ� �κ�
    if (!min_pq.empty())
    {
        int tmp = min_pq.top();

        while (min_pq.size() != 1)
        {
            min_pq.pop();
        }
        answer.push_back(min_pq.top());
        answer.push_back(tmp);
    }
    else if (!max_pq.empty())
    {
        answer.push_back(max_pq.top());
        while (max_pq.size() != 1)
        {
            max_pq.pop();
        }
        answer.push_back(max_pq.top());

    }
    else
    {
        answer.push_back(0);
        answer.push_back(0);
    }



    return answer;

}

int main() {

    vector<string> operations = { "I -45", "I 653", "D 1", "D 1","D 1","D 1", "I -642", "I 45", "I 97", "D 1", "D -1", "I 333" };
    vector<int>answer;
    answer = solution(operations);

    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
}