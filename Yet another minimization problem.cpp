#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
#include<algorithm>
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll          long long
#define endl        '\n'
#define vi          vector<int>
/* template <typename U = T>
  typename enable_if<is_same<typename Modular<U>::Type, long long>::value, Modular>::type& operator*=(const Modular& rhs) {
    long long q = static_cast<long long>(static_cast<long double>(value) * rhs.value / mod());
    value = normalize(value * rhs.value - q * mod());
    return *this;
  }
  template <typename U = T>
  typename enable_if<!is_integral<typename Modular<U>::Type>::value, Modular>::type& operator*=(const Modular& rhs) {
    value = normalize(value * rhs.value);
    return *this;
  }
 
  Modular& operator/=(const Modular& other) { return *this *= Modular(inverse(other.value, mod())); }
 
  friend const Type& abs(const Modular& x) { return x.value; }*/
void answer()
{
    int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
  
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);
    }
  }
  
}
void qsn()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);
      }
    }
    
}
void solve()
{
    ll n;
    cin>>n;
    ll counter=0;
    /*auto it = t.insert(10).f; assert(it == t.lb(9));
	assert(t.ook(10) == 1 && t.ook(11) == 2 && *t.fbo(0) == 8);
	t.join(t2);*/
    vector<ll> x(n);
    for(int i=0;i<n;i++)
     {
         cin>>x[i];
         x[i]/=(i+1);
     }
     ll ans=1e9;
     /*ll cur_sum = 0;
		FOR(i,1,N+1) {
			cur_sum += A[0][i];
			for (;j < sz(ev) && get<0>(ev[j]) == i; ++j) {
				auto [_, q, sgn] = ev[j];
				if (sgn == 1) { // start
					seg.set(q,{max(dp[i-1],cur_sum)-K[q],-K[q]});
				} else { // end
					seg.set(q,{-BIG,-BIG});
				}
			}*/
     for(ll i=n-1;i>=0;i--)
     {
         for(ll j=i-1;j>=0;j--)
         {
             counter++;
             /*map<int,int> distinct;
	int cnt = 0;
	F0R(i,N) {
		vi v(M); re(v);
		each(t,v) {
			if (!distinct.count(t)) distinct[t] = cnt++;
			t = distinct[t];
		}
		A[i].s = vi(all(v));
		re(A[i].f);
	}
	sor(A);
	ban = allowed = vb(sz(distinct));*/
             ll value=abs(x[i]-x[j]);
             /*vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);*/
             ans=min(ans,(j+1)*(i+1)*(value));
             if(ans==0)
              break;
              /*F0R(i,N) {
		int x = T.ook(P[i]);
		// x before it less
		// i-x before it greater
		invs += i-x;
		dif.pb(2*(P[i]-1)-i);
		T.ins(P[i]);
	}
	sor(dif);
	vl res{invs};
	F0R(i,N) {
		invs += dif[i]-i;
		res.pb(invs);
	}*/
              if(counter>=10000000)
               break;
         }
         /*F0R(i,N) FOR(j,i+1,N) invs += P[i] > P[j];
	auto eval = [&](int i) {
		int cur = invs;
		F0R(x,N) FOR(y,x+1,N) if (!(i&(1<<x))) if (i&(1<<y)) {
			if (P[x] > P[y]) --cur;
			else ++cur;
		}
		return cur;
	};*/
         if(ans==0)
          break;
          /*vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }
  vector<int> xs;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      xs.push_back(a[i][j]);*/
          if(counter>=10000000)
           break;
           /* vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      --x;*/
     }
     
     cout<<ans<<endl;
}
void segment()
{
    int n, tt;
  cin >> n >> tt;
  vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;
      cin >> x;
      --x;
      qs.emplace_back(x, -1);
    } 
}
}
int main() {
    
    int tc; cin >> tc;
    while(tc--) {
        
          solve();
    }
}