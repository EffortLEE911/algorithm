//========================================= ���α׷��ӽ� �Է� ================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    vector<int> box;
    sort(score.begin(), score.end());  //algorithm ���, ������ ������� ����

    //     for(int i=0;i<score.size();i++){
    //         cout<<score[i]<<" ";

    //     }

    while (score.size() >= m) //������ ũ�Ⱑ m���� �۾��� �� ���� �ݺ� (���⼭ m�� �ڽ��� ���� ������ ��)
    {
        for (int i = 0; i < m; i++)
        {
            if (i == m - 1)
            {
                int tmp = score.back(); //������������ ���� �Ǿ� �ֱ� ������, �տ� �Ѱ��� �������ָ� �ȴ�.
                box.push_back(tmp);     //���� ��� [3 4 4 4]�� �� �ִٸ� �տ� 3�� box�� ����־� �༭ 
                //�������� ����ϰڴٴ� ����
            }

            score.pop_back(); // ������������ ���ĵǾ� �ֱ� ������
            // �ڿ��� ���� ���� �ڽ��� ��ΰ� ���� �� �ִ�.
            // �׷��� m���� score ���� ���ڴٴ� ����


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

    cout << "score vector�� �����Դϴ�" << endl;

    for (int i = 0; i < score.size(); i++) {
        cout << score[i] << " ";
    }
    cout << endl;

    cout << "answer = " << solution(k, m, score) << endl;
	
}


