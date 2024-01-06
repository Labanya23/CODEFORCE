#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0,p=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
          if(s[i]=='+')
          {
              p++;
          }
          else{
            o++;
          }

    }
    cout<<abs(p-o)<<endl;
}
return 0;
}
