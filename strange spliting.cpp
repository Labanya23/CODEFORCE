#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==a[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"RB";


        for(int i=2;i<n;i++ )
            cout<<"R";
            cout<<endl;
        }
    }
    return 0;
}
