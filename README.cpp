# 1839B-codeforces

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
struct C {
    bool operator()(pair<ll, ll>& p1,pair<ll, ll>& p2)  {
        if (p1.first == p2.first)
            return p1.second < p2.second;
        else
            return p1.first > p2.first;
    }
};
 
int main() {
    ll t;
    cin >> t;
    while (t--) {
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, C> pq;
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        for (ll i = 0; i < n; i++) {
            pq.push({a[i], b[i]});
        }
        ll sum = 0, bulb_break = 0, k = 0;
        while (!pq.empty()) {
            auto item = pq.top();
            a[k] = item.first;
            b[k] = item.second;
            pq.pop();
            k++;
        }
 
        ll x = 0,c[n+1]={0};  // Number of lamps turned on
        for (ll i = 0; i < n; i++) 
        {
            if(c[a[i]]>=a[i])
            {
                continue;
            }
            else
            {
                sum+=b[i];
            }
            c[a[i]]++;
        }
        cout<<endl;
        cout << sum << endl;
    }
 
    return 0;
}
