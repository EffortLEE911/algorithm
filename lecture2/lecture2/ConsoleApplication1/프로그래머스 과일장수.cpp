#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score);

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

//========================================= 프로그래머스 입력 ================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    vector<int> box;
    sort(score.begin(), score.end());  //algorithm 헤더

    //     for(int i=0;i<score.size();i++){
    //         cout<<score[i]<<" ";

    //     }

    while (score.size() >= m)
    {


        for (int i = 0; i < m; i++) {
            if (i == m - 1) {
                int tmp = score.back();
                box.push_back(tmp);
            }

            score.pop_back();


        }

    }

    for (int i = 0; i < box.size(); i++)
    {
        answer = answer + box[i] * m;
    }


    return answer;
}

// =========================================================================================
