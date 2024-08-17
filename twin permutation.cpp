#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a;
            cout<<n+1-a<<" ";
        }
        cout<<endl;
    }
    return 0;
}
