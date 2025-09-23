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
	
	// auto 사용하면 자료형을 알아서 찾아준다.
	// auto it = find(vec.begin(), vec.end(), target);

	cout << &it << endl;
	cout << *it << endl;
	
	int index = it - vec.begin();
	//위와 같이 index 접근이 가능한 경우, iterator끼리 뺄 수 있다. 
	// 주소는 16진수로 되어있고, 16진수 끼리 뺀 값을 자료형(현재 int, int는 4byte)의 크기만큼 나눈 값이 index 번호가 된다.

	cout << "index로 접근 : "<< vec[index] << endl;

	//target 값 지우기
	vec.erase(it);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	//////============================= 아래는 for 반복문 =========================
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