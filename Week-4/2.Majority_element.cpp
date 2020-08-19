#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int coun=0;
int elem=a[0];
for(int i=0;i<n;i++){
    if(a[i]==elem){
        coun++;
    }
    else{
        coun=1;
        elem=a[i];
    }

    if(coun>n/2){
        cout << 1;
        return 0;
    }
}
cout << 0;
return 0;
}
