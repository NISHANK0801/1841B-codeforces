# 1353C-codeforces

#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll solve(ll n)
{
    ll k=1;
    ll w=-1;
    ll sum=0;
    ll i=0;
    while(k!=(n+2))
    {
    
        sum+=(2*k*i)+(2*i*w);
        k+=2;
        w+=2;
        i++;
    }
    return sum;
}

int main()
{
    
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            cout<<solve(n)<<endl;
        }
}
