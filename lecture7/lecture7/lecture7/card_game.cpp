#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    //랜덤함수를 잘 만들었다면 아래의 deck에서 카드를 꺼내서 랜덤하게 카드 값을 변경 할 수 잇다.
                                //c = 클로바 , d= 다이아, h=하트, s=스페이드
	vector<string> deck = {  "01c", "07c", "08c", "09c", "10c", "11c", "12c", "13c",
                             "01d", "07d", "08d", "09d", "10d", "11d", "12d", "13d",
                             "01h", "07h", "08h", "09h", "10h", "11h", "12h", "13h",
                             "01s", "07s", "08s", "09s", "10s", "11s", "12s", "13s" }; 



    vector<string> mycard;
    vector<int> mycard_num_only;         //카드에서 숫자만 추출해서 저장하기 위함
    vector<string> mycard_shape_only;       //카드에서 모양만 추출해서 저장하기 위함

    int paircount = 0;                      //원페어 투페어 트리플 포카드 풀하우스 등 비교를 위한 변수

    bool is_mountain = false;
    bool is_flush = false;
    bool is_straight = false;

    //mycard = { "10c", "01c", "11c", "12c","13c" }; // 로얄 스트레이트 플러쉬
    //mycard = { "07c", "01c", "08c", "12c","13c" }; // 플러쉬
    mycard = { "07c", "07s", "07d", "07h","13c" }; // 포카드
    

    //sort(mycard.begin(), mycard.end());      //필요하면 정렬하기.

    for (int i = 0; i < mycard.size(); i++) {
        cout << mycard[i] << endl;
    }

    for (int i = 0; i < mycard.size(); i++)
    {
        mycard_num_only.push_back(stoi(mycard[i].substr(0, 2)));      //숫자만 추출해서 저장하기
        mycard_shape_only.push_back(mycard[i].substr(2, 1));    //모양만 추출해서 저장하기

    }

    sort(mycard_num_only.begin(), mycard_num_only.end());
    sort(mycard_shape_only.begin(), mycard_shape_only.end());

    
    for (int i = 0; i < mycard_num_only.size() - 1; i++) 
    {
        for (int j = i+1; j < mycard_num_only.size(); j++) 
        {

            if (mycard_num_only[i] == mycard_num_only[j])
            {
                paircount++;
            }

        }
        
    }
   


    if (mycard_shape_only[0] == mycard_shape_only[4])
    {
        is_flush = true;                    //플러쉬 확인, 정렬을 했기 때문에 앞과 뒤만 확인한다.
    }

        
    if (mycard_num_only[0] == 1 && mycard_num_only[1] == 10 && mycard_num_only[2] == 11 \
        && mycard_num_only[3] == 12 && mycard_num_only[4] == 13)    //마운틴 확인
    {
        is_mountain = true;
    }                       
            
    for (int i = 0; i < mycard_num_only.size()-1; i++) 
    {

        if (mycard_num_only[i] == mycard_num_only[i + 1] - 1) //순차 탐색하면서, 2차이 이상 나는게 한개라도 존재하면 스트레이트 안됨
        {
            is_straight = true;
        }
        else
        {
            is_straight = false;
            break;
        }

    }

    if (is_flush && is_mountain) 
    {
        cout << "로얄 스트레이트 플러쉬 입니다." << endl;
    }
    else if (is_flush && is_straight)
    {
        cout << "스트레이트 플러쉬 입니다." << endl;
    }
    else if (paircount == 6) {
        cout << "포카드 입니다." << endl;
    }
    else if (paircount == 4) {
        cout << "풀하우스입니다." << endl;
    }
    else if (is_flush) {
        cout << "플러쉬 입니다." << endl;
    }
    else if (is_mountain) {
        cout << "마운틴 입니다." << endl;
    }
    else if (is_straight) {
        cout << "스트레이트 입니다." << endl;
    }
    else if (paircount == 3) {
        cout << "트리플입니다." << endl;
    }
    else if (paircount == 2) {
        cout << "투페어 입니다." << endl;
    }
    else if (paircount == 1) {
        cout << "원페어 입니다." << endl;
    }
    else {
        cout << "탑카드 입니다. " << endl;
    }

}