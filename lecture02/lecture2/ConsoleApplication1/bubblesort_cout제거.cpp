#include <iostream>
#include <vector>
#include <format>

using namespace std;


int main()
{
    vector<int> vec = { 5, 1, 6, 4, 2,3 };

    int tmp; // temporaray �Ͻ�����, �ӽð��� �����ϱ� ���� ����

    for (int k = vec.size() - 1; k > 0; k--)/// vec.size() - 1�� ����, å������ for(int k=0; k<vec.size()-1; k++)
                                            ///                                  for(int i=0; i<vec.size() - (k+1); i++) �̷��� ����
    {

        for (int i = 0; i < k; i++)
        {


            if (vec[i] > vec[i + 1])
            {

                tmp = vec[i + 1];       // �ӽð��� �����ϱ� ���� ������ ���� ���� �־� ���´�.
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


