#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(300);
	dq.push_front(20);
	dq.push_front(999);

	dq.pop_front();
	dq.pop_back();

	for (int i = 0; i < dq.size(); i++)
	{
		cout << dq[i] << " ";
	}
	cout << endl;

	if (!dq.empty())
	{
		cout << "deque�� ù ��° ���Ҵ�? : " << dq.front();
		cout << "deque�� ������ ���Ҵ�? : " << dq.back();
	}
	cout << endl;

}