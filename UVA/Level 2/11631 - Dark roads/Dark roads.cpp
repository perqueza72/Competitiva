#include <bits/stdc++.h>
#define INF INT_MAX
#define MINF INT_MIN
#define ld long double
#define ll long long
#define PB push_back
#define PF push_front
#define P_F pop_front
#define P_B pop_back
#define F front
#define B back
#define f first
#define s second
#define MP make_pair
#define FOR(i, a, b) for(ll i = a; i < b; i++)
#define FORI(i, a, b) for(ll i = a; i >= b; i--)
 
using namespace std;

bool comp(pair<int, pair<int, int> > &a, pair<int, pair<int, int> > &b){
  return a.f < b.f;
}

int find(int x, vector<int> &p){
  if(x == p[x]) return x;
  return p[x] = find(p[x], p);
}

void com(int &a, int &b, vector<int> &p, vector<int> &s){
  if(s[a] > s[b]) swap(a, b);
  p[a] = b;
  s[b] += s[a];
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, m, x, y, c, fx, fy, ans, maxi;
  
  while(cin >> n >> m, n + m){
    vector<int> p(n), s(n, 1);
    deque<pair<int, pair<int, int> > > e;
    FOR(i, 1, n) p[i] = i;
    
    maxi = 0;
    FOR(i, 0, m){
      cin >> x >> y >> c;
      e.PB(MP(c, MP(x, y)));
      maxi += c;
    }
    
    sort(e.begin(), e.end(), comp);
    ans = 0;
    FOR(i, 0, e.size()){
      fx = e[i].s.f;
      fy = e[i].s.s;
      fx = find(fx, p);
      fy = find(fy, p);
      
      if(fx != fy){
        ans += e[i].f;
        com(fx, fy, p, s);
      }
    }
    
    cout << maxi - ans << "\n";
  }
  
  return 0;
}