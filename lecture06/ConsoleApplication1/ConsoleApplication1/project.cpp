#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int arr[9]; // 길
int visited[9]; // 방문 표시

int main() {

	for (int i = 1; i < 9; i++) {
		arr[i] = 1;

	}

	int d_x[2] = { -1, +1 }; // 좌 우 이동 

	queue<int> q;

	int dinosaur = 3;
	int apple = 8;

	q.push(dinosaur);
	visited[dinosaur] = 1;

	int next_x;

	while (!q.empty()) {

		dinosaur = q.front();

		q.pop();

		cout << "현재 공룡의 위치는 " << dinosaur << endl;

		for (int i = 0; i < 2; i++) {  // 2는 d_x의 크기

			next_x = dinosaur + d_x[i];


			if (next_x >= 0 && next_x <= 8) //다음 이동범위가 배열 안에 존재할 수 있는가 체크

			{

				if (visited[next_x] == 0 && arr[next_x] == 1) {	//다음 이동이 방문하지 않았고,
																//길이 연결되어 있는가 체크
					q.push(next_x);
					visited[next_x] = 1;


				}
			}
		}
	}
}