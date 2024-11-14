#include <iostream>
#include <vector>

using namespace std;

int visited[9];
int arr[9];
int n;
int m;

void dfs(int depth);


int main() {
	
	cin >> n;
	cin >> m;
	
	visited[0] = 1;

	dfs(0);

	

}

void dfs(int depth) {

	if (depth==m) {
		for (int i = 0; i < m; i++) 
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		
	}

	else {
		for (int i = 1; i <= n; i++)
		{
			if (visited[i] != 1)
			{
				visited[i] = 1;
				arr[depth] = i;
				dfs(depth + 1);
				visited[i] = 0;
				
			}
		}

	}
}




