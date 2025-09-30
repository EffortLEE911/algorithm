#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <queue>

using namespace std;



vector<int> solution(vector<string> operations)
{
    vector<int> answer;

    //최솟값을 삭제하는 연산이 나올 경우 pq를 min_pq로 옮겨 최솟값 삭제,
    //최댓값을 삭제하는 연산이 나올 경우 pq를 max_pq로 옮겨 최댓값 삭제하는 로직.
    priority_queue<int, vector<int>, greater<int>> min_pq;
    priority_queue<int, vector<int>> max_pq;

    string now_pq = "min";

    string s1;
    int s2;


    for (int i = 0; i < operations.size(); i++)
    {
        //istringstream : 입력 전용 스트림으로 문자열을 공백단위로 토큰화 할때 유용하다.
        //지금 상황에서는 반드시 사용할 필요는 없으나 문자열 다룰 때 유용해서 알아두면 좋다.
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
        else if (s1 == "D" && (!max_pq.empty() || !min_pq.empty())) //값이 priority queue에 값이 하나라도 존재할 때 pop()연산을 진행한다.
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

    //최종 결과를 출력해주는 부분
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