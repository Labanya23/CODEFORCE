#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int a=strlen(x);
        long long int ans=0;
        int c=1;
        for(int i=1;i<a;i++){
            if(x[i]=='0'){
                if(c>1)ans+=c;
            }
            else c++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
