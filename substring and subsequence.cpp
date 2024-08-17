#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int ans=a.size+b.size;
        for(int i=0;i<b.size();i++)
        {
            int p2=i;
            for(int p1=0;p1<a.size()&& p2<b.size();p1++){
                if(a[p1]==b[p2]){
                    p2++;
                }
            }
            int n=i+a.size()+(b.size()-p2);
            ans=min(ans,n);
        }
        cout<<ans<<endl;
    }
    return 0;
}
