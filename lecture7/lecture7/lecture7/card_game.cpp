#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    //�����Լ��� �� ������ٸ� �Ʒ��� deck���� ī�带 ������ �����ϰ� ī�� ���� ���� �� �� �մ�.
                                //c = Ŭ�ι� , d= ���̾�, h=��Ʈ, s=�����̵�
	vector<string> deck = {  "01c", "07c", "08c", "09c", "10c", "11c", "12c", "13c",
                             "01d", "07d", "08d", "09d", "10d", "11d", "12d", "13d",
                             "01h", "07h", "08h", "09h", "10h", "11h", "12h", "13h",
                             "01s", "07s", "08s", "09s", "10s", "11s", "12s", "13s" }; 



    vector<string> mycard;
    vector<int> mycard_num_only;         //ī�忡�� ���ڸ� �����ؼ� �����ϱ� ����
    vector<string> mycard_shape_only;       //ī�忡�� ��縸 �����ؼ� �����ϱ� ����

    int paircount = 0;                      //����� ����� Ʈ���� ��ī�� Ǯ�Ͽ콺 �� �񱳸� ���� ����

    bool is_mountain = false;
    bool is_flush = false;
    bool is_straight = false;

    //mycard = { "10c", "01c", "11c", "12c","13c" }; // �ξ� ��Ʈ����Ʈ �÷���
    //mycard = { "07c", "01c", "08c", "12c","13c" }; // �÷���
    mycard = { "07c", "07s", "07d", "07h","13c" }; // ��ī��
    

    //sort(mycard.begin(), mycard.end());      //�ʿ��ϸ� �����ϱ�.

    for (int i = 0; i < mycard.size(); i++) {
        cout << mycard[i] << endl;
    }

    for (int i = 0; i < mycard.size(); i++)
    {
        mycard_num_only.push_back(stoi(mycard[i].substr(0, 2)));      //���ڸ� �����ؼ� �����ϱ�
        mycard_shape_only.push_back(mycard[i].substr(2, 1));    //��縸 �����ؼ� �����ϱ�

    }

    sort(mycard_num_only.begin(), mycard_num_only.end());
    sort(mycard_shape_only.begin(), mycard_shape_only.end());

    
    for (int i = 0; i < mycard_num_only.size() - 1; i++) 
    {
        for (int j = i+1; j < mycard_num_only.size(); j++) 
        {

            if (mycard_num_only[i] == mycard_num_only[j])
            {
                paircount++;
            }

        }
        
    }
   


    if (mycard_shape_only[0] == mycard_shape_only[4])
    {
        is_flush = true;                    //�÷��� Ȯ��, ������ �߱� ������ �հ� �ڸ� Ȯ���Ѵ�.
    }

        
    if (mycard_num_only[0] == 1 && mycard_num_only[1] == 10 && mycard_num_only[2] == 11 \
        && mycard_num_only[3] == 12 && mycard_num_only[4] == 13)    //����ƾ Ȯ��
    {
        is_mountain = true;
    }                       
            
    for (int i = 0; i < mycard_num_only.size()-1; i++) 
    {

        if (mycard_num_only[i] == mycard_num_only[i + 1] - 1) //���� Ž���ϸ鼭, 2���� �̻� ���°� �Ѱ��� �����ϸ� ��Ʈ����Ʈ �ȵ�
        {
            is_straight = true;
        }
        else
        {
            is_straight = false;
            break;
        }

    }

    if (is_flush && is_mountain) 
    {
        cout << "�ξ� ��Ʈ����Ʈ �÷��� �Դϴ�." << endl;
    }
    else if (is_flush && is_straight)
    {
        cout << "��Ʈ����Ʈ �÷��� �Դϴ�." << endl;
    }
    else if (paircount == 6) {
        cout << "��ī�� �Դϴ�." << endl;
    }
    else if (paircount == 4) {
        cout << "Ǯ�Ͽ콺�Դϴ�." << endl;
    }
    else if (is_flush) {
        cout << "�÷��� �Դϴ�." << endl;
    }
    else if (is_mountain) {
        cout << "����ƾ �Դϴ�." << endl;
    }
    else if (is_straight) {
        cout << "��Ʈ����Ʈ �Դϴ�." << endl;
    }
    else if (paircount == 3) {
        cout << "Ʈ�����Դϴ�." << endl;
    }
    else if (paircount == 2) {
        cout << "����� �Դϴ�." << endl;
    }
    else if (paircount == 1) {
        cout << "����� �Դϴ�." << endl;
    }
    else {
        cout << "žī�� �Դϴ�. " << endl;
    }

}