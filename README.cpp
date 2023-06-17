# 1841B-codeforces

#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

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
        ll a[n+1];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll b,count=0,min,max,count2=0;
        for(ll i=0;i<n;i++)
        {
            if(i==0)
            {
                max=a[i];
                b=a[i];
                cout<<1;
            }
            else if(a[i]>=max && count!=1 && count2!=1)
            {
                max=a[i];
                cout<<1;
            }
            else if(a[i]<max && count!=1)
            {
                if(a[i]<=a[0])
                {
                    count=1;
                    min=a[i];
                    max=a[i-1];
                    cout<<1;
                }
                else 
                {
                    cout<<0;
                }
                count2=1;
            }
            else
            {
                if(a[i]>=min && a[i]<=b && a[i]<=max)
                {
                    min=a[i];
                    cout<<1;
                }
                else if(a[i]>=max && count!=1)
                {
                    max=a[i];
                    cout<<1;
                }
                else
                {
                    cout<<0;
                }
            }
           
            
        }
         cout<<endl;
   }
   
}
