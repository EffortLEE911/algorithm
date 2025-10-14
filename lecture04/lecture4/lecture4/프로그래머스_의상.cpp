#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;

    unordered_map<string, vector<string>> hash;
    vector<string> keys;
    int mul = 1;

    for (int i = 0; i < clothes.size(); i++)
    {
        hash[clothes[i][1]].push_back(clothes[i][0]);
    }

    //key������ ǥ���ϰ�, �����ϴ� ���.
    for (auto it = hash.begin(); it != hash.end(); it++)
    {
        keys.push_back(it->first);
    }


    // �ƹ��͵� ���� ���� ��츦 ������ +1
    for (int i = 0; i < keys.size(); i++)
    {
        mul = mul * (hash[keys[i]].size() + 1);
    }

    //��� �ʵ� ������ ���� �����Ƿ� 1���� ��츦 ���ش�.
    answer = mul - 1;


    return answer;
}

int main()
{

    vector<vector<string>> clothes = 
    {{"yellow_hat", "headgear"}, { "blue_sunglasses", "eyewear" }, { "green_turban", "headgear" }};


    cout << solution(clothes) << endl;




}