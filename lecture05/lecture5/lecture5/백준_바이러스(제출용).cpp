#include <iostream>

using namespace std;

bool visited[101];
int arr[101][101];

void DFS(int k);

int c_num;
int cnt;

int main() {

	int k;

	int a;
	int b;

	cin >> c_num;
	cin >> k;

	for (int i = 0; i < k; i++) {
		cin >> a;
		cin >> b;

		arr[a][b] = 1;
		arr[b][a] = 1;


	}

	//arr[1][2] = 1;
	//arr[2][1] = 1;

	//arr[2][3] = 1;
	//arr[3][2] = 1;

	//arr[1][5] = 1;
	//arr[5][1] = 1;

	//arr[5][2] = 1;
	//arr[2][5] = 1;

	//arr[5][6] = 1;
	//arr[6][5] = 1;

	//arr[4][7] = 1;
	//arr[7][4] = 1;
	
	//for (int i = 1; i <= 7; i++) {
	//	for (int j = 1; j <= 7; j++) {
	//		cout << arr[i][j] << " ";

	//	}
	//	cout << endl;
	//}

	DFS(1);
	cout << cnt - 1;

}

void DFS(int k) {
	visited[k] = 1;
	/*cout << "현재 정점은" << k << endl;*/
	cnt++;
	for (int i = 1; i <= c_num; i++) {
		if (visited[i] != 1 && arr[k][i]==1) {
			
			DFS(i);

			
		}
	}

}