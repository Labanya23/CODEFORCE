#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],b[k];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<k;i++){
            cin>>b[i];
        }
        for(int i=0;i<k;i++){
            cout<<min(a[0]-1,b[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}
