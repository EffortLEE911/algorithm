#include <iostream>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

int main()
{

	//rand()�� ���� ����� ���� ����� �ƴϳ� �ٸ� ����� �� �� ��ٷο�, ������ rand()�� ����� ������� ���� ����

	srand(511);  // rand() �� ���� ���� �� �ֵ��� �õ尪 �ٲٱ�, ������ ���� �ð��� ����Ͽ� ���ڰ� õõ�� ���ϴ� ������ ����.

	int r1 = rand() % 9 + 1;
	int r2 = rand() % 9 + 1;
	int r3 = rand() % 9 + 1;


	while (r1 == r2 || r3 == r2)    //r2 �� ���� ������
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

		cout << "�߱����� ����! ���ڸ� �Է��ϼ���!" << endl;
		for (int i = 0; i < 3; i++)
		{
			cin >> input;
			submit.push_back(input);
		}

		cout << "����� �Է� : " << submit[0];
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
		cout << "�����մϴ� �����Դϴ�! ����� "<< count << " �� ���� ������ϴ�! ������ : " << answer[0];
		cout << ", " << answer[1];
		cout << ", " << answer[2] << endl;
	}
	else
	{

		cout << "�ƽ����ϴ�! ������ " << answer[0];
		cout << ", "<<answer[1];
		cout << ", " << answer[2] << endl;
	}







	////cin�� getline ����� �ڿ� ���ۿ� ������ ���Ƽ� ���۸� �������.
	//string s;
	//cin.ignore();

	//getline(cin ,s);

	//cout << "�Է� ���� ����? " << s << endl;

	



}