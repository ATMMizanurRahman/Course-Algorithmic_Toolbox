#include<bits/stdc++.h>
using namespace std;

int main(){


 long long n;
 cin>>n;

 long long ans;

 if(n==1 || n==2){
    cout << 1;
    return 0;
 }
 long long a=1,b=1;
 for(int i=3;i<=n;i++){
    ans=a%10+b%10;
    if(i==n){
        cout << ans%10;
        return 0;
    }
    b=a;
    a=ans;
 }

 cout << ans;

}
