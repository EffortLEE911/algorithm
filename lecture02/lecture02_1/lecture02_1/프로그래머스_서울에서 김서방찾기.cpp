#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";

    int target = 0;
    string s_target = "";

    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            target = i;
        }
    }

    //����ȯ, int �ڷ������� string���� ����ȯ, �ݴ�� string -> int �� stoi() �Լ� ���

    s_target = to_string(target);

    answer = "�輭���� " + s_target + "�� �ִ�";

    return answer;
}











///���� solution() �Լ���  �����ϸ� ����

int main(){

    vector<string> vec;

    vec.push_back("Jane");
    vec.push_back("Kim");

    cout<<solution(vec)<<endl;


}