#include <string>
#include <vector>
#include <iostream>


using namespace std;

int arr[501][501];

int solution(vector<vector<int>> triangle) {
    int answer = 0;

    arr[0][0] = triangle[0][0];

    for (int i = 0; i < triangle.size() - 1; i++)
    {

        for (int j = 0; j < triangle[i].size(); j++)
        {
            if (arr[i][j] + triangle[i + 1][j] > arr[i + 1][j])
            {
                arr[i + 1][j] = arr[i][j] + triangle[i + 1][j];
            }

            if (arr[i + 1][j + 1] < arr[i][j] + triangle[i + 1][j + 1])
            {
                arr[i + 1][j + 1] = arr[i][j] + triangle[i + 1][j + 1];
            }
        }

    }
    int max_n = -1;

    for (int i = 0; i < triangle.size(); i++)
    {
        if (max_n < arr[triangle.size() - 1][i])
        {
            max_n = arr[triangle.size() - 1][i];
        }
    }


    answer = max_n;

    return answer;
}