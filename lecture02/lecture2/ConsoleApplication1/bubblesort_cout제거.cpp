#include <iostream>
#include <vector>
#include <format>

using namespace std;


int main()
{
    vector<int> vec = { 5, 1, 6, 4, 2,3 };

    int tmp; // temporaray 일시적인, 임시값을 저장하기 위한 변수

    for (int k = vec.size() - 1; k > 0; k--)/// vec.size() - 1에 주의, 책에서는 for(int k=0; k<vec.size()-1; k++)
                                            ///                                  for(int i=0; i<vec.size() - (k+1); i++) 이렇게 구현
    {

        for (int i = 0; i < k; i++)
        {


            if (vec[i] > vec[i + 1])
            {

                tmp = vec[i + 1];       // 임시값을 저장하기 위한 변수에 값을 집어 넣어 놓는다.
                vec[i + 1] = vec[i];
                vec[i] = tmp;


            }

        }


    }

    cout << "최종 값" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;



}


