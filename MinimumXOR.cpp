#include <iostream>
#include <vector>
#include <set>
#include <numeric>
#include <cmath>
#include<algorithm>
#include<map>
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
 int t;
cin>>t;
while(t--){
  long long n;
    cin>>n;
    long long x=n;
    /*vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;*/
    vector<long long>a;
    while(x){
        a.push_back(x%2);
       /*vector<pair<int, int>> qs;
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(i);
  }
  for (int i = 0; i < tt; i++) {
    int op;
    cin >> op;
    if (op == 1) {
      int x;*/ 
        x/=2;
    }
    
    long long p=1,f=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            /*vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);*/
            cout<<p<<endl;
            f=1;
            break;;
        }
        /*vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> odd;
    vector<int> even;
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        odd.push_back(a[i]);
      } else {
        even.push_back(a[i]);*/
        p*=2;
    }
    if(f)
    continue;
    
    cout<<p<<endl;
}
 return 0;
}