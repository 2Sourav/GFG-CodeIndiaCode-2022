#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#define pb push_back
#define ll long long
#define inf 1000000001
#define inf1 1000000000000000001
using namespace std;
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
  sort(a.begin(), a.end());
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
void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int>idx[2][2];
    for(int i=0;i<n;i++){
        idx[a[i]-'0'][b[i]-'0'].pb(i);
    }
    
    if((idx[0][1].size()^idx[1][0].size())&1){
        cout<<-1<<"\n";
        /*if(ind < idx[1][0].size())
            {
                mini = min(mini, abs(idx[1][0][ind]-it));
            }
            if(ind - 1 >= 0) 
            {
                int lead=min(mini, abs(idx[1][0][ind-1]-it));
                mini =lead;
            }*/
        return;
    }
    int ans = 0;
    if((idx[0][1].size()&1)&&(idx[1][0].size()&1))
    {
        int mini = inf;
        /*vector<pair<int, int>> qs;
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
    } */
        for(auto it:idx[0][1]) 
        {
            auto ind =lower_bound(idx[1][0].begin(), idx[1][0].end(), it) - idx[1][0].begin();
            /* map<int, int> mp;
  int t = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      auto it = mp.find(a[i][j]);
      if (it == mp.end()) {
        mp[a[i][j]] = t;
        a[i][j] = t++;
      } else {
        a[i][j] = it->second;
      }
    }*/
            if(ind < idx[1][0].size())
            {
                mini = min(mini, abs(idx[1][0][ind]-it));
            }
            /* if (cur > 0) {
        int id = L + __builtin_ctzll(cur);
        ans = min(ans, w[i] + w[id]);
      }
    }
    for (int i = L; i < R; i++) {
      for (int j = 0; j < m; j++) {
        mask[a[i][j]] ^= (one << (i - L));
      }
    }
  }*/
            if(ind - 1 >= 0) 
            {
                int lead=min(mini, abs(idx[1][0][ind-1]-it));
                mini =lead;
            }
            /*vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j + 1];
    }
    cin >> a[i][0];
  }
  sort(a.begin(), a.end());
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    w[i] = a[i][0];
    a[i].erase(a[i].begin());
  }*/
        }
        int op=min(2, mini);

        ans += op;
    }
    int temp1=idx[0][1].size()/2;
int temp2=idx[1][0].size()/2;
/*int l, r, x;
      cin >> l >> r >> x;
      --l; --r;
      if (x == 0) {
        while (true) {
          auto it = s.lower_bound(l);
          if (it != s.end() && (*it) <= r) {
            qs.emplace_back(*it, -2);
            s.erase(it);
          } else {
            break;
          }
        }*/
    ans += temp1;
    ans += temp2;
/*vector<vector<int>> at(tt + 1);
    bool any = false;
    for (int i = 0; i < tt; i++) {
      if (low[i] < high[i]) {
        mid[i] = (low[i] + high[i]) >> 1;
        at[mid[i]].push_back(i);
        any = true;
      }
    }*/
    cout<<ans<<"\n";
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}