#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,ans=0;
        cin>>a>>b>>c>>d;
        if(max(a,c)>min(b,d)){
            cout<<"1"<<endl;
        }
        else{
            int l=max(a,c);
            int r=min(b,d);
            int ans=r-l;
            if(a!=c) ans++;
            if(b!=d) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
