#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        /*
        if(n>m || n==m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        if(n<m){
            cout<<"NO"<<endl;
        }
        else if(n/m==1){
            cout<<"YES"<<endl;
        }
        */
        if((m>n) || (m&1)!=(n&1)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }

    return 0;
}
