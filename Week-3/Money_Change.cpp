    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
        long long n;
        cin>>n;
        long long ans=0;
        while(n!=0){
            if(n>=10){
                ans++;
                n=n-10;
            }
            else if(n>=5){
                ans++;
                n=n-5;
            }
            else{
                ans++;
                n=n-1;
            }
        }
        cout << ans;
    }
