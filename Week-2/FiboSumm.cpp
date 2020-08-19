#include<bits/stdc++.h>
using namespace std;

long long Fibo(long long n){

 long long ans;
 if(n==1 || n==2){
    return 1;
 }
 long long a=1,b=1;
 for(int i=3;i<=n;i++){
    ans=a+b;
    if(i==n){
        return ans;
    }
    b=a;
    a=ans;
 }
}

int main(){


 long long n;
 cin>>n;

 cout <<Fibo(n);

}
