#include <iostream>
#include <unordered_map>
#include <string>



using namespace std;

int main() {

	unordered_map<string, int>hash;

	hash["hello"] = 1;
	hash.insert(make_pair("good", 99));
	hash.insert({ "friend", 77 });

	cout << "hello의 value 값은" << hash["hello"] << endl;
	cout << "good의 value 값은" << hash["good"] << endl;
	cout << "friend의 value 값은" << hash["friend"] << endl;

	
	

}