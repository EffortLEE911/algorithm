#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

int main()
{

	//rand()를 쓰는 방법은 좋은 방법은 아니나 다른 방법은 좀 더 까다로워, 간단한 rand()를 사용한 방법으로 난수 생성

	srand(511);  // rand() 의 값이 변할 수 있도록 시드값 바꾸기, 하지만 현재 시간을 사용하여 숫자가 천천히 변하는 단점이 존재.

	int r1 = rand() % 9 + 1;
	int r2 = rand() % 9 + 1;
	int r3 = rand() % 9 + 1;


	while (r1 == r2 || r3 == r2)    //r2 의 값이 같은지
	{
		r2 = rand() % 9 + 1;
	}
	while (r1 == r3 || r2 == r3)
	{
		r3 = rand() % 9 + 1;
	}

	string baseball = "";
	baseball = baseball + to_string(r1) + to_string(r2) + to_string(r3);

	//========================================================================================



	int strike=0;
	int ball=0;
	int out=3;
	int count = 0;

	vector<int> answer = { 3,1,9 };
	vector<int> submit;

	int input = 0;

	for (int k = 0; k < 10; k++)
	{
		if (strike == 3)
		{
			break;
		}

		strike = 0;
		ball = 0;
		out = 3;

		cout << "야구게임 시작! 숫자를 입력하세요!" << endl;
		for (int i = 0; i < 3; i++)
		{
			cin >> input;
			submit.push_back(input);
		}

		cout << "당신의 입력 : " << submit[0];
		cout << ", " << submit[1];
		cout << ", " << submit[2] << endl;

		for (int i = 0; i < answer.size(); i++)
		{
			for (int j = 0; j < submit.size(); j++)
			{

				if (answer[i] == submit[j])
				{
					if (i == j)
					{
						strike++;
					}
					else
					{
						ball++;
					}
				}

			}
		}
		out = out - strike - ball;
		

		cout << "strike :" << strike;
		cout << ", ball: " << ball;
		cout << ", out: " << out << endl << endl;

		count++;
		submit.clear();
	}

	if (strike == 3)
	{
		cout << "축하합니다 정답입니다! 당신은 "<< count << " 번 만에 맞췄습니다! 정답은 : " << answer[0];
		cout << ", " << answer[1];
		cout << ", " << answer[2] << endl;
	}
	else
	{

		cout << "아쉽습니다! 정답은 " << answer[0];
		cout << ", "<<answer[1];
		cout << ", " << answer[2] << endl;
	}







	////cin과 getline 섞어쓰면 뒤에 버퍼에 공백이 남아서 버퍼를 비워주자.
	//string s;
	//cin.ignore();

	//getline(cin ,s);

	//cout << "입력 받은 값은? " << s << endl;

	



}