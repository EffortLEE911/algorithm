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

	int a = 0;
	int b = 0;
	for (int i = 13; i < 5001; i++) {
		a = arr[i - 3];
		b = arr[i - 5];

		if (a > b) {
			arr[i] = b + 1;
		}
		else {
			arr[i] = a + 1;
		}

	}
	cin >> N;

	cout << arr[N] << endl;




}