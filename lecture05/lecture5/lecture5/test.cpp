#include <iostream>

using namespace std;

bool visited[101];
int arr[101][101];

void DFS(int k);

int c_num = 7;
int cnt = 0;

void dfs(int num);

int main() {

	int k;
	visited[0] = 1;

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

	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << endl;
	}

	dfs(1);




}

void dfs(int num) {

	visited[num] = 1;
	cout << "ÇöÀç num Àº? : " << num << endl;

	for (int i = 1; i <= 7; i++) {

		if (arr[num][i] == 1 && visited[i] == 0) {
			dfs(i);
		}

	}

}