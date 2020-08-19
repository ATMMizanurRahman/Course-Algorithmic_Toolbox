#include<bits/stdc++.h>
using namespace std;

int main(){


 long long n,m;
 cin>>n>>m;

 long long ans;

 if(n==1 || n==2){
    cout << 1;
    return 0;
 }
 long long a=1,b=1;
 for(int i=3;i<=n;i++){
    ans=a%m+b%m;
    if(i==n){
        cout << ans%m;
        return 0;
    }
    b=a;
    a=ans;
 }

 cout << ans;

}
