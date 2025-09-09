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

    //형변환, int 자료형에서 string으로 형변환, 반대로 string -> int 는 stoi() 함수 사용

    s_target = to_string(target);

    answer = "김서방은 " + s_target + "에 있다";

    return answer;
}











///위에 solution() 함수를  복붙하면 정답

int main(){

    vector<string> vec;

    vec.push_back("Jane");
    vec.push_back("Kim");

    cout<<solution(vec)<<endl;


}