#include <iostream>
#include <vector>

using namespace std;

int visited[101][101];


int main() {

	//vector<vector<int>>maps = { {1, 0, 1, 1, 1} ,{1, 0, 1, 0, 1},{1, 0, 1, 1, 1},{1, 1, 1, 0, 1},{0, 0, 0, 0, 1} };

	//vector<vector<int>>maps = { {1, 1, 1, 1, 1} ,
	//							{0, 0, 1, 0, 1},
	//							{1, 1, 1, 0, 1},
	//							{1, 0, 0, 0, 1},
	//							{1, 1, 1, 1, 1} }; // 깊이 우선 탐색이 최단거리가 안되는 반례

	vector<vector<int>>maps = { {1, 0, 1, 1, 1},
								{1, 0, 1, 0, 1},
								{1, 0, 1, 1, 1},
								{1, 1, 1, 0, 1},
								{0, 0, 0, 0, 1} };

	int answer = 0;

	visited[0][0] = 1;

	int y_len = maps.size()-1;
	int x_len = maps[0].size()-1;
	
	vector<pair<int, int>> vec;

	vec.push_back({ 0,0 });
	visited[0][0] = 1;

	int d_y[4] = { 0, 1,  0, -1 };
	int d_x[4] = { 1, 0, -1, 0 };


	int cur_y = 0;
	int cur_x = 0;

	int next_y = 0;
	int next_x = 0;


	while (!vec.empty())
	{
		cur_y = vec.back().first;
		cur_x = vec.back().second;

		vec.pop_back();

		for (int i = 0; i < 4; i++)
		{
			next_y = cur_y + d_y[i];
			next_x = cur_x + d_x[i];

			if ((next_y >= 0 && next_y <= y_len) && (next_x >= 0 && next_x <= x_len))
			{
				if (visited[next_y][next_x] == 0 && maps[next_y][next_x] == 1)
				{
					vec.push_back({ next_y, next_x });
					visited[next_y][next_x] = visited[cur_y][cur_x] + 1;
				}
				////아래의 코드를 추가하면 최단거리를 찾을 수 있으나 갔던 길을 한번 더 체크해야해서 효율이 떨어진다.
				//else if (visited[next_y][next_x] != 0 && (visited[next_y][next_x] > visited[cur_y][cur_x] + 1))
				//{
				//	cout << "next_y : " << next_y << ", next_x : " << next_x << endl;
				//	vec.push_back({ next_y, next_x });
				//	visited[next_y][next_x] = visited[cur_y][cur_x] + 1;
				//}

			}

		}

	}

	if (visited[y_len][x_len] == 0)
	{
		answer = -1;
	}
	else
	{
		answer = visited[y_len][x_len];
	}


	cout << answer << endl;



	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << visited[i][j] << "  ";
		}
		cout << endl;
	}


}

