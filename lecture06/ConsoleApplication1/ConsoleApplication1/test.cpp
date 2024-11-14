#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int visited[101][101];

int main() {

    vector<vector<int>>maps = { {1, 0, 1, 1, 1},
                                {1, 0, 1, 0, 1},
                                {1, 0, 1, 1, 1},
                                {1, 1, 1, 0, 0},
                                {0, 0, 0, 0, 1} };

    int answer = 0;
    int d_y[4] = { -1, 0, 1, 0 };
    int d_x[4] = { 0, 1, 0, -1 };

    int y_len = maps.size();
    int x_len = maps[0].size();

    queue<pair<int, int>> q;

    q.push(make_pair(0, 0));
    visited[0][0] = 1;

    int cur_y=0;
    int cur_x=0;
    
    int next_y=0;
    int next_x=0;

    while (!q.empty()) {

        cur_y = q.front().first;
        cur_x = q.front().second;

        q.pop();

        for (int i = 0; i < 4; i++) {
            next_y = cur_y + d_y[i];
            next_x = cur_x + d_x[i];

            if ((next_y >= 0 && next_y <= y_len - 1) && (next_x >= 0 && next_x <= x_len - 1))
            {
                if (maps[next_y][next_x] == 1 && visited[next_y][next_x] == 0)
                {
                    q.push(make_pair(next_y, next_x));
                    visited[next_y][next_x] = visited[cur_y][cur_x] + 1;

                }
            }
        }
        
    
    }


    if (visited[y_len - 1][x_len - 1]==0) 
    {
        answer = -1;
    }
    else {
        answer = visited[y_len - 1][x_len - 1];
    }

    



}