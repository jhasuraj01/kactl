#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

#ifdef ONLINE_JUDGE
#define deb(...) 1
#else
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
#endif

template<typename ...Args>
void logger(string vars, Args&&... values) {
    cout << vars << " = ";
    string delim = "";
    (..., (cout << delim << values, delim = ", "));
    cout << '\n';
}

template <typename T>
ostream& operator<<(ostream& os, vector<T>& v) {
    for (auto e : v) os << e << " ";
    return os;
}

int32_t main() {
	cin.tie(0)->sync_with_stdio(0); cin.exceptions(cin.failbit);
	cout << setprecision(17) << fixed << flush;
}
