#include <iostream>

using namespace std;

const int MOD = 1000000007;

int main()
{

    string parent = "Hello world";

    string target = "world";

    int parent_hash = 0;
    int target_hash = 0;

    //pow �� power(����)�� ����, 2^0 = 1 
    int pow = 1;
    for (int i = 0; i < target.size()-1; i++) {
        pow = pow * 2;
    }
    
    int pow_or = pow; // ������ �����س���, power_original ����.


    // target�� hash���� parent�� hash�� ���ÿ� ���ϱ�. �Ʒ� ������ t�� target�� ����.
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
                cout << "hash���� ������ ���ڿ��� �ٸ��ϴ�." << endl;
            }
            else if(is_same) 
            {
                cout << i << " ��°�� ���� ���ڿ��� �ֽ��ϴ�." << endl;
            }
        }

    }


}

