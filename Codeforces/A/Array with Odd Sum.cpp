#include <bits/stdc++.h>
#define INF INT_MAX
#define MINF INT_MIN
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
#define forit(i, s) for(__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define foritr(i, s) for(__typeof ((s).rend ()) i = (s).rbegin (); i != (s).rend (); ++i)
 
using namespace std;


int main(){
  int cases, n, ax, par, impar;
  cin >> cases;
  
  FOR(a, 0, cases){
    cin >> n;
    par = impar = 0;
    
    FOR(i, 0, n){
      cin >> ax;
      if(ax%2) impar++;
      else par++;
    }
    
    if(impar){
      if(impar%2) cout << "YES\n";
      else if(par) cout << "YES\n";
      else cout << "NO\n";
    }else cout << "NO\n";
  }
  
  return 0;
}
