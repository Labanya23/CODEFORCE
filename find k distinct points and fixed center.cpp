#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=-c/2;i<=c/2;i++)
        {

            if(c%2==0 && i==0)continue;
            cout<<a+i<<" "<<b<<endl;
        }
    }
    return 0;
}
