#include <iostream>
#include <unordered_map>
#include <string>



using namespace std;

int main() {

	unordered_map<string, int>hash;

	hash["hello"] = 1;
	hash.insert(make_pair("good", 99));
	hash.insert({ "friend", 77 });

	cout << "hello�� value ����" << hash["hello"] << endl;
	cout << "good�� value ����" << hash["good"] << endl;
	cout << "friend�� value ����" << hash["friend"] << endl;

	
	

}