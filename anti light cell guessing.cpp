#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,c=0;
        cin>>n>>m;
        if(m==1 && n==1)
            cout<<"0"<<endl;
        else if(m==1 || n==1)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;
        //c=min(n,m);
        //cout<<c<<endl;

    }
    return 0;
}
