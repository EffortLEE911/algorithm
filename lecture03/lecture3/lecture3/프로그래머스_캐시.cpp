#include <string>
#include <vector>
#include <iostream>
#include <deque>
#include <algorithm>


using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    //����ð�, answer ���� ����ص� ������, ���ظ� �������� ���.
    int runtime = 0;
    string tmp = "";
    string c;

    deque<string> dq;

    if (cacheSize == 0)
    {
        runtime = 5 * cities.size();
        answer = runtime;
        return answer;
    }


    for (int i = 0; i < cities.size(); i++)
    {
        tmp = "";

        //�ҹ��ڷ� �ٲٴ� �ݺ���
        for (int j = 0; j < cities[i].size(); j++)
        {
            c = tolower(cities[i][j]);
            tmp = tmp + c;

        }


        auto it = find(dq.begin(), dq.end(), tmp);

        //�����Ѵٸ�?
        if (it != dq.end())
        {
            dq.erase(it);
            dq.push_front(tmp);
            runtime = runtime + 1;

        }
        else
        {
            //�������� �ʴ´ٸ�?
            if (dq.size() >= cacheSize)
            {
                dq.pop_back();
            }
            dq.push_front(tmp);
            runtime = runtime + 5;


        }


    }

    answer = runtime;
    return answer;
}

int main()
{

    vector<string> vec = { "Jeju", "Pangyo", "Seoul", "NewYork", "LA", "SanFrancisco", "Seoul", "Rome", "Paris", "Jeju", "NewYork", "Rome" };
    int cacheSize = 2;


    cout << solution(cacheSize, vec) << endl;


}