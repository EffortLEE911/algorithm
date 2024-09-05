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


    cout << "초기값" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;


    int tmp; // temporaray 일시적인

    for (int k = vec.size() - 1; k > 0; k--)/// vec.size() - 1에 주의, 책에서는 for(int k=0; k<vec.size()-1; k++)
                                            ///                                  for(int i=0; i<vec.size() - (k+1); i++) 이렇게 구현
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

    cout << "최종 값" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;



}


