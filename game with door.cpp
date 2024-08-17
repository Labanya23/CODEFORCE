#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,l=0,r=0;
        cin>>a>>b>>c>>d;
        if(a<c && b<d){
            cout<<"1"<<endl;

        }
        else{
        int l=max(a,b);
        int r=min(c,d);

        cout<<l-r<<endl;
        }
    }
    return 0;
}
