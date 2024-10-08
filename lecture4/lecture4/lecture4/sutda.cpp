#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {


	int card1;
	int card2;

	card1 = 3;
	card2 = 3;

	cout << "card 1의 값은 : " << card1 << endl;
	cout << "card 2의 값은 : " << card2 << endl<<endl;

	bool is_ddang=false;

	if (card1 == card2) // card1과 card2가 같다면 땡이다! 라고 표시하는 로직
	{
		is_ddang = true;
	}


	unordered_map<string, string> hash;

	//hash["1"] = "1땡";
	//hash["2"] = "2땡";
	//hash["3"] = "3땡";
	//hash["4"] = "4땡";
	//hash["5"] = "5땡";
	//hash["6"] = "6땡";
	//hash["7"] = "7땡";
	//hash["8"] = "8땡";
	//hash["9"] = "9땡";
	//hash["10"] = "장땡";

	for (int i = 1; i <= 10; i++) 
	{
		if (i == 10) {
			hash[to_string(i)] = "장땡"; //to_string >> i는 자료형이 int이고 hash에는 string 자료형이 key로 들어가야하므로 to_string으로 형변환
		}
		else {
			string tmp = "땡";
			hash[to_string(i)] = to_string(i) + tmp;
		}
	}

	if (is_ddang) {
		cout << "현재 값은 " << hash[to_string(card1)] << endl;
	}
	else {
		cout << "땡값이 아닙니다!" << endl;
	}


}