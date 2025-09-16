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
        //while�� ���� ���ڰ� ������ ������ ��� ó��
        //���� ��� "oneoneone"�� ��� while ó���� ���� ���� ��� "1oneone"

        while (true)
        {
            size_t it = s.find(arr[i]);

            //npos = �������� �ʴ´ٴ� �ǹ�
            if ((it == string::npos))
                break;

            //replace(��ġ, ũ��, ��ü ���ڿ�)
            //���ڿ� ��ġ�� ũ�⸸ŭ ��ü ���ڿ��� ��ü�Ѵ�.
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