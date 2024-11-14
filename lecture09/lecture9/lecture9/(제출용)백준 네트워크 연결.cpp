#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int parent[1001];

int find_union(int parent[], int n)
{
    if (parent[n] == n)
        return n;

    parent[n] = find_union(parent, parent[n]);
    return parent[n];

}

void make_union(int parent[], int n, int m) 
{
    int a = find_union(parent, n);
    int b = find_union(parent, m);

    if (b > a) 
    {
        parent[b] = a;
    }
    else 
    {
        parent[a] = b;
    }
}

int main()
{
    int N;
    int M;

    int x = 0;
    int y = 0;
    int cost = 0;

    int answer = 0;

    vector<pair<int, pair<int, int>>> vec;

    cin >> N;
    cin >> M;

    for (int i = 1; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        cin >> x;
        cin >> y;
        cin >> cost;

        vec.push_back({ cost,{x,y} });

    }

    sort(vec.begin(), vec.end());


    for (int i = 0; i < vec.size(); i++) 
    {

        int n = 0;
        int m = 0;
        n = vec[i].second.first;
        m = vec[i].second.second;

        if (find_union(parent, n) != find_union(parent, m))
        {
            make_union(parent, n, m);
            answer = answer + vec[i].first;
        }

    }
    cout << answer << endl;


}


