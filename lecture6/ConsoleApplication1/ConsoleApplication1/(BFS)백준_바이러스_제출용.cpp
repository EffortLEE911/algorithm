#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int arr[101][101];
int visited[101];
int c_num;
int M;


int main() {
	int c;
	int cur;

	int a;
	int b;

	visited[0] = 1;

	queue<int> q;

	cin >> c_num;
	cin >> M;
	for (int i = 1; i <= M; i++) {

		cin >> a;
		cin >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	
	visited[1] = 1;
	q.push(1);

	while (!q.empty())
	{
		cur = q.front();
		//cout << "현재 q는 " << cur << endl;
		q.pop();

		for (int i = 1; i <= c_num; i++)
		{
			if (arr[cur][i] == 1 && visited[i] == 0)
			{
				q.push(i);
				//cout << "queue에 " << i << "가 들어갑니다." << endl;
				visited[i] = 1;
				c++;

			}
		}
		
	}
	cout << c;



}