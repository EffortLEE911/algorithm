#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    vector<int> box;
    sort(score.begin(), score.end(), greater<>());

    for (int i = 0; i < score.size(); i = i + m)
    {
        if (i + m <= score.size())
        {
            answer = answer + score[i + m - 1] * m;
        }
    }


    return answer;
}

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


