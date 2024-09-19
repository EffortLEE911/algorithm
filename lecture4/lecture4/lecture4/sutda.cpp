#include <iostream>
#include <unordered_map>
#include <string>



using namespace std;

int main() {


	int card1;
	int card2;

	card1 = 3;
	card2 = 3;

	cout << "card 1狼 蔼篮 : " << card1 << endl;
	cout << "card 2狼 蔼篮 : " << card2 << endl<<endl;

	bool is_ddang=false;

	if (card1 == card2) {
		is_ddang = true;
	}


	unordered_map<string, string> hash;

	//hash["1"] = "1动";
	//hash["2"] = "2动";
	//hash["3"] = "3动";
	//hash["4"] = "4动";
	//hash["5"] = "5动";
	//hash["6"] = "6动";
	//hash["7"] = "7动";
	//hash["8"] = "8动";
	//hash["9"] = "9动";
	//hash["10"] = "厘动";

	for (int i = 1; i <= 10; i++) {
		if (i == 10) {
			hash[to_string(i)] = "厘动";
		}
		else {
			string tmp = "动";
			hash[to_string(i)] = to_string(i) + tmp;
		}
	}

	if (is_ddang) {
		cout << "泅犁 蔼篮 " << hash[to_string(card1)] << endl;
	}
	else {
		cout << "动蔼捞 酒凑聪促!" << endl;
	}


}