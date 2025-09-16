#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;

    vector<string> arr = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    for (int i = 0; i < arr.size(); i++)
    {
        //while은 같은 문자가 여러개 존재할 경우 처리
        //예를 들어 "oneoneone"의 경우 while 처리를 하지 않을 경우 "1oneone"

        while (true)
        {
            size_t it = s.find(arr[i]);

            //npos = 존재하지 않는다는 의미
            if ((it == string::npos))
                break;

            //replace(위치, 크기, 대체 문자열)
            //문자열 위치에 크기만큼 대체 문자열로 대체한다.
            s.replace(it, arr[i].size(), to_string(i));
        }
    }
    answer = stoi(s);


    return answer;
}

int main()
{

    string s = "one4seveneightoneoneone";

    cout << s.replace(0, 1, "heeeeell");


    //solution(s);


}