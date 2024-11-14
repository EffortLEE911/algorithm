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

	//�������� ����
	priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

	//���� ����{����ġ , ������ġ} 
	pq.push({ 0, 1 });
	d[1] = 0;

	int cur_cost = 0;
	int cur_pos = 0;

	while (!pq.empty()) 
	{
		cur_cost = pq.top().first;
		cur_pos = pq.top().second;
		pq.pop();

		if (cur_cost > d[cur_pos]) //���� ���� ��ġ�� ����ġ�� ����� ����ġ ���� ũ�ٸ� �ƹ��ϵ� �Ͼ�� �ʰ��ϱ�, continue
		{
			continue;		
		}

		for (int i = 0; i < arr[cur_pos].size(); i++)
		{
			int next_cost = arr[cur_pos][i].second;
			int next_pos = arr[cur_pos][i].first;

			if (cur_cost + next_cost < d[next_pos]) // ���������� �۴ٸ� �����ϴ� ����
			{

				d[next_pos] = cur_cost + next_cost;	// ���������� �۴ٸ� ����
				pq.push({ d[next_pos], next_pos });	//{���ŵ� ��, ��ġ}

			}

		}
	}

	for (int i = 1; i <= 5; i++) {
		cout << d[i] << " ";
	}

	


}