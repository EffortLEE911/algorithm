#include <iostream>

using namespace std;

int main()
{

	
	int arr[10] = { 3, 5, 10,2,20 ,4,6 };

	int max = arr[0];

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << "ÃÖ´ñ°ªÀº " << max << endl;





}