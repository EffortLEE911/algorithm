#include <iostream>
#include <vector>
#include <format>

using namespace std;


int main()
{
    vector<int> vec;

    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(6);
    vec.push_back(4);
    vec.push_back(2);
    vec.push_back(3);


    cout << "�ʱⰪ" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;


    int tmp; // temporaray �Ͻ�����

    for (int k = vec.size() - 1; k > 0; k--)/// vec.size() - 1�� ����, å������ for(int k=0; k<vec.size()-1; k++)
                                            ///                                  for(int i=0; i<vec.size() - (k+1); i++) �̷��� ����
    {

        for (int i = 0; i < k; i++)
        {


            if (vec[i] > vec[i + 1])
            {
                tmp = vec[i + 1];
                vec[i + 1] = vec[i];
                vec[i] = tmp;

            }

        }


    }

    cout << "���� ��" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;



}


