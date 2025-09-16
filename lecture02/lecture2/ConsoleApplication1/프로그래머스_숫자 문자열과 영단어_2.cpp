#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;


// 정규 표현식을 사용할 줄 아느냐 모르느냐가 출제 의도입니다. 그래서 정규식을 사용하여 문제를 풀었다면, 100점 아니면 감점
// 2021년 인턴십의 문제에 대한 해설은 찾지 못했지만, 비슷한 유형의 코딩테스트 문제에서 위와 같이 해설한 적 있습니다.
// (문자 데이터를 많이 다루는 회사의 특징이라 정규표현식에 대한 문제를 낸 것 같습니다.)
// 
// 
// 정규 표현식을 연습하기 굉장히 어렵습니다. 하지만 현업자들이 하는 말, "GPT가 정규 표현식을 굉장히 잘 표현한다" 
// 라는 말이 있습니다. 그래서 내가 원하는 정규표현식을 GPT에게 물어보고 여러 경험을 해보세요!
// 
// 
// 


int solution(string s) {
    int answer = 0;

    // regex_replace(문자열, 정규식, 대체문자열), 반환 자료형 : string, 
    // 문자열s 에서 정규표현식에 해당하는 문자를 대체 문자열로 변환 해서 반환

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