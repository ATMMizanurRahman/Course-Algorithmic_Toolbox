    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    int main()
    {
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        for(ll i=0;i<n;i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
        cout << sum;
    }

