#include <iostream>
#include <unordered_map>
#include <string>



using namespace std;

int main() {


	int card1;
	int card2;

	card1 = 3;
	card2 = 3;

	cout << "card 1�� ���� : " << card1 << endl;
	cout << "card 2�� ���� : " << card2 << endl<<endl;

	bool is_ddang=false;

	if (card1 == card2) {
		is_ddang = true;
	}


	unordered_map<string, string> hash;

	//hash["1"] = "1��";
	//hash["2"] = "2��";
	//hash["3"] = "3��";
	//hash["4"] = "4��";
	//hash["5"] = "5��";
	//hash["6"] = "6��";
	//hash["7"] = "7��";
	//hash["8"] = "8��";
	//hash["9"] = "9��";
	//hash["10"] = "�嶯";

	for (int i = 1; i <= 10; i++) {
		if (i == 10) {
			hash[to_string(i)] = "�嶯";
		}
		else {
			string tmp = "��";
			hash[to_string(i)] = to_string(i) + tmp;
		}
	}

	if (is_ddang) {
		cout << "���� ���� " << hash[to_string(card1)] << endl;
	}
	else {
		cout << "������ �ƴմϴ�!" << endl;
	}


}