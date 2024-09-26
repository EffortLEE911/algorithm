#include <iostream>

using namespace std;

bool visited[101];
int arr[101][101];

void DFS(int k);

int c_num=7;
int cnt=0;

int main() {

	int k;


	arr[1][2] = 1;
	arr[2][1] = 1;

	arr[2][3] = 1;
	arr[3][2] = 1;

	arr[1][5] = 1;
	arr[5][1] = 1;

	arr[5][2] = 1;
	arr[2][5] = 1;

	arr[5][6] = 1;
	arr[6][5] = 1;

	arr[4][7] = 1;
	arr[7][4] = 1;

	for (int i = 1; i <= 7; i++) {		//arr 인접 행렬 확인하기
		for (int j = 1; j <= 7; j++) {
			cout << arr[i][j] << " ";

		}
		cout << endl;
	}

	DFS(1);
	cout << cnt - 1;

}

void DFS(int k) {
	visited[k] = 1;

	cout << "현재 정점은" << k << endl;

	cnt++;
	for (int i = 1; i <= c_num; i++) {
		if (visited[i] != 1 && arr[k][i] == 1) {

			DFS(i);


		}
	}

}