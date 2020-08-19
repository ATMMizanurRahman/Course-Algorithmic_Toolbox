#include<bits/stdc++.h>
using namespace std;

int main(){


 long long n,m;
 cin>>m>>n;

 long long ans;

 if(m==0){
    cout <<0;
    return 0;
 }

 if(m==1){
    cout <<1;
    return 0;
 }

 if(m==2){
    cout <<2;
    return 0;
 }

 if(m==3){
    cout <<4;
    return 0;
 }

 if(n==1){
    cout << 1;
    return 0;
 }

 if(n==2){
    cout << 2;
    return 0;
 }

 long long a=1,b=1;
 long long summ=0;
 if(m==1){
    summ=1;
 }
 if(m==2){
    summ=2;
 }
 for(int i=3;i<=n;i++){
    ans=a%10+b%10;
    if(i>=m){
    summ=summ+ans;
    }
    if(i==n){
        cout << summ%10;
        return 0;
    }
    b=a;
    a=ans;
 }

 cout << ans;

}
