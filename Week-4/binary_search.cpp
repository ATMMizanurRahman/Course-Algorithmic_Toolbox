#include<bits/stdc++.h>
#define ll long long
using namespace std;

int binary_search(const vector<ll> &a, ll x) {
  ll low = 0, high = (int)a.size() - 1;
  while(low <= high) {
	  int mid = low + (high - low)/2;
	  if (x == a[mid])
		  return mid;
	  else if (x < a[mid])
		  high = mid - 1;
	  else
		  low = mid + 1;
  }
  return -1;
}


int main(){
  ll n;
  cin>>n;
  vector<ll> a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  ll m;
  cin>>m;
  vector<ll> b(n);
  for(ll i=0;i<m;i++){
    cin>>b[i];
    ll ans=binary_search(a,b[i]);
    cout << ans <<" ";
  }

  return 0;

}
