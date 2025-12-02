#include <iostream>

using namespace std;

int arr[5001];

int main() {
	int N = 18;

	int answer = 0;

	arr[1] = -1;
	arr[2] = -1;
	arr[3] = 1;
	arr[4] = -1;
	arr[5] = 1;
	arr[6] = 2;
	arr[7] = -1;
	arr[8] = 2;
	arr[9] = 3;
	arr[10] = 2;
	arr[11] = 3;
	arr[12] = 4;
	arr[13] = 3;
	arr[14] = 4;
	arr[15] = 3;


	int a = 0;

	for (int i = 11; i < 5001 - 5; i++) {
		arr[i + 5] = arr[i] + 1;

	}
	cin >> N;

	cout << arr[N] << endl;




}