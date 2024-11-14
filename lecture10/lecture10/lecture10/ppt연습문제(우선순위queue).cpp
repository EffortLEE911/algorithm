#include <iostream>
#include <queue>

using namespace std;

const int INF = 9999;

vector<pair<int, int>> arr[6];
int d[6];

int main() {

	arr[1].push_back({ 2,2 });
	arr[1].push_back({ 3,4 });
	arr[2].push_back({ 3, 1 });
	arr[2].push_back({ 4, 10 });
	arr[2].push_back({ 5, 5 });
	arr[3].push_back({ 4, 4 });
	arr[4].push_back({ 5, 7 });

	for (int i = 1; i <= 5; i++) {
		d[i] = INF;
	}

	//오름차순 정렬
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

	//저장 순서{가중치 , 시작위치} 
	pq.push({ 0, 1 });
	d[1] = 0;

	int cur_cost = 0;
	int cur_pos = 0;

	while (!pq.empty()) 
	{
		cur_cost = pq.top().first;
		cur_pos = pq.top().second;
		pq.pop();

		if (cur_cost > d[cur_pos]) //만약 현재 위치의 가중치가 저장된 가중치 보다 크다면 아무일도 일어나지 않게하기, continue
		{
			continue;		
		}

		for (int i = 0; i < arr[cur_pos].size(); i++)
		{
			int next_cost = arr[cur_pos][i].second;
			int next_pos = arr[cur_pos][i].first;

			if (cur_cost + next_cost < d[next_pos]) // 기존값보다 작다면 갱신하는 로직
			{

				d[next_pos] = cur_cost + next_cost;	// 기존값보다 작다면 갱신
				pq.push({ d[next_pos], next_pos });	//{갱신된 값, 위치}

			}

		}
	}

	for (int i = 1; i <= 5; i++) {
		cout << d[i] << " ";
	}

	


}