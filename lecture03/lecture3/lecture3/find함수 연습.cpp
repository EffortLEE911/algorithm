#include <iostream>
#include <vector>
#include <deque>

using namespace std;


int main()
{
	int target = 3;

	//deque<int> dq = { 100,300,3,31,1 };
	//deque<int>::iterator it = find(dq.begin(), dq.end(), target);
	
	vector<int> vec = { 100,300,3,31,1 };
	vector<int>::iterator it = find(vec.begin(), vec.end(), target);
	
	// auto ����ϸ� �ڷ����� �˾Ƽ� ã���ش�.
	// auto it = find(vec.begin(), vec.end(), target);

	cout << &it << endl;
	cout << *it << endl;
	
	int index = it - vec.begin();
	//���� ���� index ������ ������ ���, iterator���� �� �� �ִ�. 
	// �ּҴ� 16������ �Ǿ��ְ�, 16���� ���� �� ���� �ڷ���(���� int, int�� 4byte)�� ũ�⸸ŭ ���� ���� index ��ȣ�� �ȴ�.

	cout << "index�� ���� : "<< vec[index] << endl;

	//target �� �����
	vec.erase(it);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	//////============================= �Ʒ��� for �ݺ��� =========================
	// 
	//vector<int> vec = { 100,300,3,31,1 };
	//int target = 3;
	//int index = 0;
	//for (int i = 0; i < vec.size(); i++)
	//{
	//	if (vec[i] == target)
	//	{
	//		index = i;
	//		break;
	//	}
	//}

	//vec.erase(vec.begin() + index);
	//
	//for (int i = 0; i < vec.size(); i++)
	//{
	//	cout << vec[i]<<" ";
	//}
	//cout << endl;
	



}