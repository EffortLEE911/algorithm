#include <vector>
#include <iostream>

using namespace std;


int main() {


	vector<int> vec;

	//vector�� �� �ֱ�
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	vec.push_back(999);

	cout << "���� vec�� ũ���? " << vec.size() << endl;

	//vector�� ���� ���� �� �����ϱ�
	vec.pop_back();

	//vector���� Ư�� ��ġ�� �� �����ϱ�
	vec.erase(vec.begin() + 2);

	
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}




}