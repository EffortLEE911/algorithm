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
		cout << "deque의 첫 번째 원소는? : " << dq.front();
		cout << "deque의 마지막 원소는? : " << dq.back();
	}
	cout << endl;

}