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
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define forit(i, s) for(__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define foritr(i, s) for(__typeof ((s).rend ()) i = (s).rbegin (); i != (s).rend (); ++i)

using namespace std;

int main() {
	int dep, cases, pos, aux, ans;
	cin >> cases;
	
	FOR(i, 0, cases){
	  cin >> dep >> pos;
	  aux = dep - 2, ans = pow(2, dep - 1);
	  pos--;
	  
	  while(aux != -1){
	    if(pos%2)
	      ans += pow(2, aux);
	    pos /= 2;
	    aux--;
	  }
	  cout << ans << "\n";
	}
	
	return 0;
}