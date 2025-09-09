#include <vector>
#include <iostream>

using namespace std;


int main() {


	vector<int> vec;

	//vector에 값 넣기
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	vec.push_back(999);

	cout << "현재 vec의 크기는? " << vec.size() << endl;

	//vector의 가장 뒤의 값 삭제하기
	vec.pop_back();

	//vector에서 특정 위치의 값 삭제하기
	vec.erase(vec.begin() + 2);

	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}




}