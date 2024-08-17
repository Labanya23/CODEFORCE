#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto [x,v] :mp){
            if(v>=k){
                cout<<k-1<<endl;
            }
            cout<<n<<endl;
        }
    }
    return 0;
}
