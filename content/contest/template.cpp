#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p)
{ return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T> ostream& operator<<(ostream &os, const vector<T> &v)
{ os << '{'; string sep; for (const auto &x: v) os << sep << x, sep = ", "; return os << '}';}

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T)
{ cerr << ' ' << H; dbg_out(T...); }

#ifdef TTL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

int main() {
    cin.tie(0)->sync_with_stdio(0);
    // cout << setprecision(16) << std::fixed;
}