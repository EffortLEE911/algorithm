
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int visited[101][101];

int main()
{

    vector<vector<int>>maps = { {1, 0, 1, 1, 1},
                                {1, 0, 1, 0, 1},
                                {1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 1},
                                {0, 0, 0, 0, 1} };
                // 아래 오른쪽 위 왼쪽
    int d_y[4] = { 1, 0, -1, 0 };   //이동을 의미한다 y가 증가하면 배열은 아래로,즉 위로 이동
    int d_x[4] = { 0, 1, 0, -1 };   // x가 증가하면 배열은 오른쪽으로이동 , 감소는 그 반대

    int y_len = maps.size()-1;
    int x_len = maps[0].size()-1;

    visited[0][0] = 1;
    visited[y_len][x_len] = -1;

    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    
    //q.push({ 0,0 });
    int cur_y;
    int cur_x;

    int next_y;
    int next_x;

    while(!q.empty())
    {
        cur_y = q.front().first;
        cur_x = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            next_y = cur_y + d_y[i];
            next_x = cur_x + d_x[i];

            if ((next_y >= 0 && next_y <= y_len) && (next_x >= 0 && next_x <= x_len))
            {
                if (maps[next_y][next_x] == 1 && (visited[next_y][next_x] == 0|| visited[next_y][next_x] == -1))
                {
                    q.push(make_pair(next_y, next_x));
                    visited[next_y][next_x] = visited[cur_y][cur_x] + 1;
                }
            }

        }
    }



    
}

