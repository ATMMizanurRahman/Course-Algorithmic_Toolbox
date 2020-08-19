#include<bits/stdc++.h>
using namespace std;

int main(){


 long long n;
 cin>>n;

 long long ans;

 if(n==1){
    cout << 1;
    return 0;
 }
 if(n==2){
    cout << 2;
    return 0;
 }
 long long a=1,b=1;
 long long summ=a+b;
 for(int i=3;i<=n;i++){
    ans=a%10+b%10;
    summ=summ+ans;
    if(i==n){
        cout << summ%10;
        return 0;
    }
    b=a;
    a=ans;
 }

 cout << ans;

}
