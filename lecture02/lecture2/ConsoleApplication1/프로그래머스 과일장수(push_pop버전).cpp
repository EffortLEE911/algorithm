//========================================= 프로그래머스 입력 ================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    vector<int> box;
    sort(score.begin(), score.end());  //algorithm 헤더, 과일을 순서대로 정렬

    //     for(int i=0;i<score.size();i++){
    //         cout<<score[i]<<" ";

    //     }

    while (score.size() >= m) //점수의 크기가 m보다 작아질 때 가지 반복 (여기서 m은 박스에 담을 과일의 수)
    {
        for (int i = 0; i < m; i++)
        {
            if (i == m - 1)
            {
                int tmp = score.back(); //오름차순으로 정렬 되어 있기 때문에, 앞에 한개만 저장해주면 된다.
                box.push_back(tmp);     //예를 들어 [3 4 4 4]가 들어가 있다면 앞에 3만 box에 집어넣어 줘서 
                //마지막에 계산하겠다는 로직
            }

            score.pop_back(); // 오름차순으로 정렬되어 있기 때문에
            // 뒤에서 부터 빼면 박스에 비싸게 담을 수 있다.
            // 그래서 m개씩 score 에서 빼겠다는 로직


        }

    }

    for (int i = 0; i < box.size(); i++)
    {
        answer = answer + box[i] * m;
    }


    return answer;
}

// =========================================================================================

int main() {

    int k = 4;
    int m = 3;

    vector<int> score = { 4,1,2,2,4,4,4,4,1,2,4,2 };

    cout << "score vector의 형태입니다" << endl;

    for (int i = 0; i < score.size(); i++) {
        cout << score[i] << " ";
    }
    cout << endl;

    cout << "answer = " << solution(k, m, score) << endl;
	
}


