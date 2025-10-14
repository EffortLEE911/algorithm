#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{

	unordered_map<string, int> hash;
	vector<string> keys;

	hash["kim"] = 20;
	hash.insert(make_pair("lee", 30));
	hash.insert({ "park",50 });

	//hash에 저장된 key값들을 불러오는 방법.
	for (auto it = hash.begin(); it != hash.end(); it++)
	{
		cout << it->first << " ";
		keys.push_back(it->first);
	}
	cout << endl;

	//체이닝
	unordered_map<string, vector<string>> chaning;

	chaning["contry"].push_back("korea");
	chaning["contry"].push_back("USA");
	chaning["contry"].push_back("japan");

	for (int i = 0; i < chaning["contry"].size(); i++)
	{
		cout << chaning["contry"][i] << " ";
	}
	cout << endl;

}

