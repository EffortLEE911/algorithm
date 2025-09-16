#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;


// ���� ǥ������ ����� �� �ƴ��� �𸣴��İ� ���� �ǵ��Դϴ�. �׷��� ���Խ��� ����Ͽ� ������ Ǯ���ٸ�, 100�� �ƴϸ� ����
// 2021�� ���Ͻ��� ������ ���� �ؼ��� ã�� ��������, ����� ������ �ڵ��׽�Ʈ �������� ���� ���� �ؼ��� �� �ֽ��ϴ�.
// (���� �����͸� ���� �ٷ�� ȸ���� Ư¡�̶� ����ǥ���Ŀ� ���� ������ �� �� �����ϴ�.)
// 
// 
// ���� ǥ������ �����ϱ� ������ ��ƽ��ϴ�. ������ �����ڵ��� �ϴ� ��, "GPT�� ���� ǥ������ ������ �� ǥ���Ѵ�" 
// ��� ���� �ֽ��ϴ�. �׷��� ���� ���ϴ� ����ǥ������ GPT���� ����� ���� ������ �غ�����!
// 
// 
// 


int solution(string s) {
    int answer = 0;

    // regex_replace(���ڿ�, ���Խ�, ��ü���ڿ�), ��ȯ �ڷ��� : string, 
    // ���ڿ�s ���� ����ǥ���Ŀ� �ش��ϴ� ���ڸ� ��ü ���ڿ��� ��ȯ �ؼ� ��ȯ

    s = regex_replace(s, regex("zero"), "0");
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");

    answer = stoi(s);

    return answer;
}

int main()
{

    string s = "one4seveneightoneoneone";

    solution(s);

    
}