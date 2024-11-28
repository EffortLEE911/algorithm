#include <iostream>

using namespace std;

const int MOD = 1000000007;

int main()
{

    string parent = "Hello world";

    string target = "world";

    int parent_hash = 0;
    int target_hash = 0;

    //pow 는 power(제곱)의 약자, 2^0 = 1 
    int pow = 1;
    for (int i = 0; i < target.size()-1; i++) {
        pow = pow * 2;
    }
    
    int pow_or = pow; // 제곱값 저장해놓기, power_original 약자.


    // target의 hash값과 parent의 hash값 동시에 구하기. 아래 수식의 t는 target의 약자.
    // t[0] * 2^4 + t[1] * 2^3 + t[2] * 2^2 + t[3] * 2^1 + t[4] * 2^0;


    for (int i = 0; i <= parent.size() - target.size(); i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < target.size(); j++)
            {

                target_hash = (target_hash + target[j] * pow) % MOD;
                parent_hash = (parent_hash + parent[j] * pow) % MOD;
                pow = pow / 2;

            }
            
        }
        else {
            parent_hash = (2 * (parent_hash - parent[i - 1] * pow_or) + parent[target.size() - 1 + i]) % MOD;
        }
 
        if (parent_hash == target_hash)
        {
            bool is_same = true;
            
            for (int j = 0; j < target.size(); j++) 
            {
                if (parent[i + j] != target[j])
                {
                    is_same = false;
                    break;

                }

            }
            if (!is_same) 
            {
                cout << "hash값은 같으나 문자열이 다릅니다." << endl;
            }
            else if(is_same) 
            {
                cout << i << " 번째에 같은 문자열이 있습니다." << endl;
            }
        }

    }


}

