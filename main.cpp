#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		int x;
		cin >> x;

		ans += x;
		ans += 8;
	}

	ans -= 8;

	auto day = ans / 24;
	ans -= day * 24;

	cout << day << ' ' << ans;

	return 0;
}