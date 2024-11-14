#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[101][101];
int visited[101];
int c_num;
int M;


int main() {

	visited[0] = 1;

	queue<int> q;

	c_num = 7;
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
	arr[4][7] = 1;

	int cur;
	visited[1] = 1;
	q.push(1);


	while(!q.empty())
	{
		cur = q.front();
		cout << "현재 q는 " << cur << endl;
		q.pop();

		for (int i = 1; i <= c_num; i++) 
		{
			if (arr[cur][i] == 1 && visited[i] == 0)
			{
				q.push(i);
				cout << "queue에 " << i << "가 들어갑니다." << endl;
				visited[i] = 1;

			}
		}
		cout << endl;
	}



}