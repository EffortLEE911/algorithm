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

    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    cout << endl << endl;

    int tmp; // temporaray 일시적인

    for (int k = vec.size() - 1; k > 0; k--)
    {

        cout << "현재 k위치는 " << k << "입니다." << endl;
        // c++ 20 버전부터 가능
        //cout << format("현재 k 위치는 {0} 입니다.", k) << endl; 

        for (int i = 0; i < k; i++) /// vec.size() - 1에 주의
        {

            cout << format("현재 위치는 {0} 입니다.", i) << endl;
            for (int j = 0; j < vec.size(); j++) {
                cout << vec[j] << ' ';
            }
            cout << endl;



            if (vec[i] > vec[i + 1])
            {
                tmp = vec[i + 1];
                vec[i + 1] = vec[i];
                vec[i] = tmp;

            }

        }

        cout << "정렬 결과입니다." << endl;

        for (int j = 0; j < vec.size(); j++) {
            cout << vec[j] << ' ';
        }
        cout << endl << endl;

    }





    


}


