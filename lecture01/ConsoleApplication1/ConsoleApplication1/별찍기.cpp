#include <iostream>

using namespace std;

int main() {


	//================= **** 별 5개 찍기================

	for (int i = 0; i < 5; i++) {
		cout << "*";
	}

	//=================================================

	cout << "\n\n\n";
	cout << "별을 1개씩 늘려가면서 5개 찍기" << endl;


	//=================  별 1개씩 늘려가면서 찍기 5개까지
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	//=================================================

	cout << "\n\n\n";
	cout << "피라미드 모양으로 찍기 " << endl;

	int floar = 7; //7층까지 쌓기

	int center = floar; //중앙지점을 정하기, 가장마지막에 

	for (int i = 0; i < floar; i++)
	{
		for (int k = 1; k < center; k++) 
		{

			cout << ' ';			// 중앙지점에 별을 찍기 위해 공백을 추가한다.
		}
		center--;

		for (int j = 0; j < 2 * i + 1; j++)		//*의 갯수가 어떻게 증가하는지 파악하고 식을 만들기.
		{
			cout << "*";
		}
		cout << endl;

	}




}