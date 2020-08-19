    #include<bits/stdc++.h>
    #define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back
#define endl '\n'

typedef long long int ll;

// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

using namespace std;
void Solve(int n) {
  vector<int> Values;
  int K = 0;
  for (int i = 1; n; i++) {
    if (n - i > i) {
      Values.push_back(i);
      K++;
      n -= i;
    } else {
      Values.push_back(n);
      K++;
      break;
    }
  }
  cout << K << endl;
  for (int i = 0; i < Values.size(); i++) {
    cout << Values[i] << " ";
  }
}
int main() {
  int n;
  cin >> n;
  Solve(n);
}
