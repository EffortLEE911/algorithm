#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget);

int main() {

    //vector<int> d = { 1,3,2,5,4 };
    //int budget = 9;

    vector<int> d = { 2,2,3,3 };
    int budget = 10;

    cout << "������ " << solution(d, budget) << endl;


}

// =========================���α׷��ӽ��� �Է�================================


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;

    sort(d.begin(), d.end());

    int s = 0;

    for (int i = 0; i < d.size(); i++)
    {

        s = s + d[i];

        if (s > budget)
            break;

        answer++;

    }



    return answer;
}

//=============================================================================