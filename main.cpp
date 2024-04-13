#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <map>
#include <cmath>
#include <ctime>

using namespace std;

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

string yesorno(bool ans) { return (ans ? "YES" : "NO"); }

using Vector2d = vector<vector<int>>;
using Pair = pair<int, int>;
const int INF = 1e9;

class Graph{
public:
	Vector2d adj;
	vector<bool> used;
	vector<int> tin;
	int timer;

public:
	Graph(int n)
	: adj(n), used(n), tin(n)
	{
		timer = 1;
	}

	void init(){
		fill(used.begin(), used.end(), false);
	}

	int size() { return adj.size() }
	vector<int>& operator[](int index) { return adj[index]; }
};

void solve(){

}

int main(){
	int tet;
	cin >> tet;
	while(tet--){

	}

	return 0;
}

// g++ file.cpp -o executable -std=c++17 -Wall -Wextra -Wpedantic -Wshadow -Wno-sign-compare -g3 -O0 -D_GLIBCXX_DEBUG -ftrapv -fsanitize=address,undefined
