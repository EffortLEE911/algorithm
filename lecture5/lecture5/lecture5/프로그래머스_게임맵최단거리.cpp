#include <iostream>
#include <vector>

using namespace std;

int visited[101][101];
vector<vector<int>>maps = { {1, 0, 1, 1, 1} ,{1, 0, 1, 0, 1},{1, 0, 1, 1, 1},{1, 1, 1, 0, 1},{0, 0, 0, 0, 1} };

//vector<vector<int>>maps = { {1, 1, 1, 1, 1} ,
//							{0, 0, 1, 0, 1},
//							{1, 1, 1, 0, 1},
//							{1, 0, 0, 0, 1},
//							{1, 1, 1, 1, 1} }; // 깊이 우선 탐색이 최단거리가 안되는 반례

void dfs(int y, int x);

int main() {
		
	int answer = 0;
	//for (int i = 0; i < maps.size(); i++) {
	//	for (int j = 0; j < maps[0].size(); j++) {
	//		cout << maps[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	visited[0][0] = 1;

	int y_len = maps.size();
	int x_len = maps[0].size();

	if (maps[y_len - 2][x_len - 1] == 0 && maps[y_len - 1][x_len - 2] == 0) {
		answer = -1;
	}
	else {

		dfs(0, 0);

		answer = visited[y_len - 1][x_len - 1];

	}
	cout << answer << endl;
	

	



}

void dfs(int y, int x) {

	int d_y[4] = { 1, 0, -1, 0 };
	int d_x[4] = { 0, 1, 0, -1 };

	cout << "현재 x는 " << x << endl;
	cout << "현재 y는 " << y << endl;
	cout << "현재 값은 " << visited[y][x] << endl << endl;
	
	for (int i = 0; i < 4; i++) 
	{
		

		int next_y = y + d_y[i];
		int next_x = x + d_x[i];


		if ((next_y >= 0 && next_y<maps.size()) && (next_x >= 0 && next_x<maps.size())) {
			if (maps[next_y][next_x] == 1 && visited[next_y][next_x] == 0)
			{
				visited[next_y][next_x] = visited[y][x] + 1;
				dfs(next_y, next_x);
			}
		}

		

	}
	
}