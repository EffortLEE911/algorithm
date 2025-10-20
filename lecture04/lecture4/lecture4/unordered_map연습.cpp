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
	unordered_map<string, vector<string>> chaining;
	vector<string> keys_chaining;

	chaining["contry"].push_back("korea");
	chaining["contry"].push_back("USA");
	chaining["contry"].push_back("japan");

	chaining["name"].push_back("lee");
	chaining["name"].push_back("kim");
	chaining["name"].push_back("park");

	//key값 저장.
	for (auto it = chaining.begin(); it != chaining.end(); it++)
	{
		keys_chaining.push_back(it->first);
	}

	cout << chaining[keys_chaining[1]][2] << endl;
	
	//key값을 활용해 chaing에 저장된 값 불러오기
	for (int i = 0; i < keys_chaining.size(); i++)
	{
		for (int j = 0; j < chaining[keys_chaining[i]].size(); j++)
		{
			cout << chaining[keys_chaining[i]][j] << " ";
		}
		cout << endl;
		
	}


}

