#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int arr[9]; // ��
int visited[9]; // �湮 ǥ��

int main() {

	for (int i = 1; i < 9; i++) {
		arr[i] = 1;

	}

	int d_x[2] = { -1, +1 }; // �� �� �̵� 

	queue<int> q;

	int dinosaur = 3;
	int apple = 8;

	q.push(dinosaur);
	visited[dinosaur] = 1;

	int next_x;

	while (!q.empty()) {

		dinosaur = q.front();

		q.pop();

		cout << "���� ������ ��ġ�� " << dinosaur << endl;

		for (int i = 0; i < 2; i++) {  // 2�� d_x�� ũ��

			next_x = dinosaur + d_x[i];


			if (next_x >= 0 && next_x <= 8) //���� �̵������� �迭 �ȿ� ������ �� �ִ°� üũ

			{

				if (visited[next_x] == 0 && arr[next_x] == 1) {	//���� �̵��� �湮���� �ʾҰ�,
																//���� ����Ǿ� �ִ°� üũ
					q.push(next_x);
					visited[next_x] = 1;


				}
			}
		}
	}
}