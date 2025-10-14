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

    //key값들을 표현하고, 저장하는 방법.
    for (auto it = hash.begin(); it != hash.end(); it++)
    {
        keys.push_back(it->first);
    }


    // 아무것도 잆지 않은 경우를 포함해 +1
    for (int i = 0; i < keys.size(); i++)
    {
        mul = mul * (hash[keys[i]].size() + 1);
    }

    //어떠한 옷도 안입을 경우는 없으므로 1개의 경우를 빼준다.
    answer = mul - 1;


    return answer;
}

int main()
{

    vector<vector<string>> clothes = 
    {{"yellow_hat", "headgear"}, { "blue_sunglasses", "eyewear" }, { "green_turban", "headgear" }};


    cout << solution(clothes) << endl;




}